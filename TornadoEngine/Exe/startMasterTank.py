import subprocess;
import time;

port     = 9000;
max_port = 9030;
while port < max_port:
	cmd = "start Tornado.exe -v 3 -d ..\..\Developer\DLL\DeveloperDLL.dll -p port %d" % port;
	PIPE = subprocess.PIPE;
	p = subprocess.Popen(cmd, shell = True);
	time.sleep(0.7)
	port = port + 1;
