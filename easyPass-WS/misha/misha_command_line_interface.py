import click

from datasets_cli import misha_datasets_system
from servers_workflow_cli import misha_servers_system
from compilers_cli import misha_compilers_system
from templates_cli import misha_templates_system

class misha_command_line_interface_system():

    def __init__(self):
        super(misha_command_line_interface_system, self).__init__()

    @click.group()
    def misha_command_line_interface():
        pass

    def set_datasets_cli(self):
        datasets_commands = misha_datasets_system()
        self.misha_command_line_interface.add_command(datasets_commands.auto_create_float_list_dataset)
        self.misha_command_line_interface.add_command(datasets_commands.auto_create_integer_list_dataset)
        self.misha_command_line_interface.add_command(datasets_commands.auto_create_float_matrix_dataset)
        self.misha_command_line_interface.add_command(datasets_commands.auto_create_integer_matrix_dataset)
        self.misha_command_line_interface.add_command(datasets_commands.auto_create_string_dataset)
        self.misha_command_line_interface.add_command(datasets_commands.create_linear_dataset)
        self.misha_command_line_interface.add_command(datasets_commands.create_matrix_dataset)

    def set_servers_cli(self):
        servers_commands = misha_servers_system()
        self.misha_command_line_interface.add_command(servers_commands.start_apache_server)
        self.misha_command_line_interface.add_command(servers_commands.start_mysql_server)
        self.misha_command_line_interface.add_command(servers_commands.xampp_start_server)
        self.misha_command_line_interface.add_command(servers_commands.xampp_stop_server)
        self.misha_command_line_interface.add_command(servers_commands.xampp_shell_server)
        self.misha_command_line_interface.add_command(servers_commands.xampp_control_server)

    def set_compilers_cli(self):
        compilers_commands = misha_compilers_system()
        self.misha_command_line_interface.add_command(compilers_commands.run_gcc)
        self.misha_command_line_interface.add_command(compilers_commands.run_jit)
        self.misha_command_line_interface.add_command(compilers_commands.run_python2)
        self.misha_command_line_interface.add_command(compilers_commands.run_python3)
        self.misha_command_line_interface.add_command(compilers_commands.go_run)
        self.misha_command_line_interface.add_command(compilers_commands.go_build)
        self.misha_command_line_interface.add_command(compilers_commands.run_exe_python2)
        self.misha_command_line_interface.add_command(compilers_commands.run_exe_python3)

    def set_templates_cli(self):
        templates_commands = misha_templates_system()
        self.misha_command_line_interface.add_command(templates_commands.standard_algo_templates)
        self.misha_command_line_interface.add_command(templates_commands.standard_easyPass_templates)
        self.misha_command_line_interface.add_command(templates_commands.standard_esential_template)
