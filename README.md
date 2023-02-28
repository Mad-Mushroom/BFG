# BFG
BFG is a DDoS Tool written in Python and user interface in C++

## Features
```
- HTTPS Requests
- custom useragents
- cutom amount of workers
- cutom amount of sockets
- different methods
- SSL Certificate verification
- more verbose outputs
- Executable Binary
- TUI Based Control
- better error codes
```

## Usage *(Python file only!)*
```
python3 bfg.py <url> [OPTIONS]

Flag                   Description                                             Default
-u, --useragents       File with user-agents to use                            (default: randomly generated)
-w, --workers          Number of concurrent workers                            (default: 10)
-s, --sockets          Number of concurrent sockets                            (default: 500)
-m, --method           HTTP Method to use 'get' or 'post'  or 'random'         (default: get)
-n, --nosslcheck       Do not verify SSL Certificate                           (default: True)
-d, --debug            Enable Debug Mode [more verbose output]                 (default: False)
-h, --help             Shows this dialog
```

## Run
```
./bfg
```
