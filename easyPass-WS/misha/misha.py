from setup import environment_variables
from misha_command_line_interface import misha_command_line_interface_system

misha_cli = misha_command_line_interface_system()

if environment_variables.misha_datasets_system:
    from datasets_cli import misha_datasets_system
    misha_cli.set_datasets_cli()

if environment_variables.misha_servers_system:
    from servers_workflow_cli import misha_servers_system
    misha_cli.set_servers_cli()

if environment_variables.misha_compilers_system:
    from compilers_cli import misha_compilers_system
    misha_cli.set_compilers_cli()

if environment_variables.misha_templates_system:
    from templates_cli import misha_templates_system
    misha_cli.set_templates_cli()

if __name__ == "__main__":
    misha_command_line_interface_system.misha_command_line_interface()
