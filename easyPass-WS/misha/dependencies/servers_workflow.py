import os

class run_check_sys():

    def __init__(self):
        super(run_check_sys, self).__init__()

    def check_name (self, name_one, name_two) -> bool:
        if (name_one == name_two):
            return True
        return False

class servers_workflow():

    def __init__(self):
        super(servers_workflow, self).__init__()

    PATH = "C:\\xampp\\"

    def start_apache(self):
        os.system(self.PATH + "apache_start.bat")

    def start_mysql(self):
        os.system(self.PATH + "mysql_start.bat")

    def xampp_start(self):
        os.system(self.PATH + "xampp_start")

    def xampp_stop(self):
        os.system(self.PATH + "xampp_stop")

    def xampp_shell(self):
        os.system(self.PATH + "xampp_shell.bat")

    def xampp_control(self):
        os.system(self.PATH + "xampp-control")

    def test_php(self):
        os.system(self.PATH + "test_php.bat")
