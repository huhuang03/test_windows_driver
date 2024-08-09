sc stop thDriver
sc delete thDriver
sc create thDriver binPath= C:\Users\User\Desktop\driver.sys type= kernel

sc create thDriver binPath= C:\Users\User\source\test_windows_driver\01_making_simple_windows_driver_in_c\driver.sys type= kernel