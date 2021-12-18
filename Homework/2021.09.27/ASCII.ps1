for ([int]$test = 33; $test -lt 256; $test++) {
       Write-Host $test, "-",([char]$test)
}
pause