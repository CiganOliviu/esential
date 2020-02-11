import click
import sys

sys.path.insert(0, 'dependencies/')

from dependencies.servers_workflow import servers_workflow

class misha_servers_system():

    def __init__(self):
        super(misha_servers_system, self).__init__()

    @click.command()
    def start_apache_server():
        servers = servers_workflow()
        servers.start_apache()

    @click.command()
    def start_mysql_server():
        servers = servers_workflow()
        servers.start_mysql()

    @click.command()
    def xampp_start_server():
        servers = servers_workflow()
        servers.xampp_start()

    @click.command()
    def xampp_stop_server():
        servers = servers_workflow()
        servers.xampp_stop()

    @click.command()
    def xampp_shell_server():
        servers = servers_workflow()
        servers.xampp_shell()

    @click.command()
    def xampp_control_server():
        servers = servers_workflow()
        servers.xampp_control()

    @click.command()
    def test_php_server():
        servers = servers_workflow()
        servers.test_php()
