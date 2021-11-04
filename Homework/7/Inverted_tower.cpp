

#include <iostream>
#include <string>


int main() {
    int N;
    std::cin >> N;
    int count=1, i=1, room=1;
    while ((room + (count * count)) <= N) {
        //room = i;
        room += (count * count);
        ++count;
        
    }
    int floor = 1 + (count * (count - 1)) / 2;
    //int j = room;
    while ((room+count) <= N) {
        room += count;
        floor++;
    }
    std::cout << floor<<' '<<N-room+1;
}
