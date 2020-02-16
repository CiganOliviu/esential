import os

class environment_variables():

    def __init__(self):
        super(environment_variables, self).__init__()

    workflow_space_path = os.getcwd()
    misha_datasets_system = True
    misha_servers_system = False
    misha_compilers_system = False
    misha_templates_system = True
