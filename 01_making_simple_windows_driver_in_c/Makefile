driver.sys: driver.exe
	ren driver.exe driver.sys
driver.exe: driver.c
	cl driver.c "C:\Program Files (x86)\Windows Kits\10\Lib\10.0.26100.0\km\x64\ntoskrnl.lib" -I "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.26100.0\\km\\" /link /subsystem:native /driver:wdm -entry:DriverEntry

clean:
	del driver.exe
	del driver.sys