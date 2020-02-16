import os

class init_templates():

    def __init__(self):
        super(init_templates, self).__init__()

    def standard_structure_algo_data_structures_templates(self, file_object):

        file_object.write("#include \"dataStructures.hpp\" \n\n")
        file_object.write("int main(int argc, char const *argv[]) {\n\n")
        file_object.write("\tOneDimensionalArrayType ODAObject;\n")
        file_object.write("\tmatrixType MTObject;\n")
        file_object.write("\tbinaryTreeType binaryTreeObject;\n\n")
        file_object.write("\treturn 0;\n")
        file_object.write("}")

    def standard_structure_easyPass_templates(self, file_object):

        file_object.write("#include \"easyPass.hpp\" \n\n")
        file_object.write("int main(int argc, char const *argv[]) {\n\n")
        file_object.write("\tassertions __assert__;\n")
        file_object.write("\tvalidationRules __validations;\n\n")
        file_object.write("\treturn 0;\n")
        file_object.write("}")

    def standard_structure_esential_templates (self, file_object):

        file_object.write("#include \"esential.hpp\" \n\n")
        file_object.write("int main(int argc, char const *argv[]) {\n\n")
        file_object.write("\toneDimensionalArraysWorkFlow ODAWorkFlow;\n")
        file_object.write("\tmatricesWorkFlow MatrixWorkFlow;\n")
        file_object.write("\tfundamentalAlgorithmsWorkFlow fundamentalsWorkFlow;\n\n")
        file_object.write("\treturn 0;\n")
        file_object.write("}")

    def standard_misha_script(self, file_object):

        file_object.write("import sys \n\n")
        file_object.write("sys.path.insert(0, '../dependencies/') \n\n")
        file_object.write("from create_datasets import dataset_type \n")
        file_object.write("from misha_scripts_dependencies import misha_scripts_dependencies \n\n")
        file_object.write("def normalize_data(data_set, data_set_workflow) -> list:\n\n")
        file_object.write("\t data = [] \n")
        file_object.write("\t data = (data_set_workflow.save_data_for_future_procesing(data_set)).split(" ") \n\n")
        file_object.write("\t final_data = [] \n\n")
        file_object.write("\t for values in data: \n")
        file_object.write("\t\t if values != '': \n")
        file_object.write("\t\t\t final_data.append(values)\n\n")
        file_object.write("\t return final_data \n\n")
        file_object.write("data_set = dataset_type() \n")
        file_object.write("data_set_workflow = misha_scripts_dependencies() \n")

class templates(init_templates):

    def __init__(self):
        super(templates, self).__init__()

    def standard_algo_data_structures_templates(self, file_name):

        ADS_template = open(file_name, "w")

        self.standard_structure_algo_data_structures_templates(ADS_template)

        ADS_template.close()

    def standard_easyPass_templates(self, file_name):

        EP_template = open(file_name, "w")

        self.standard_structure_easyPass_templates(EP_template)

        EP_template.close()

    def standard_esential_template(self, file_name):

        ESE_template = open(file_name, "w")

        self.standard_structure_esential_templates(ESE_template)

        ESE_template.close()

    def standard_misha_template(self, file_name):

        MISHA_SCRIPTS_PATH = str(os.getcwd()) + "\\misha_scripts\\"

        MISHA_template = open(MISHA_SCRIPTS_PATH + file_name, "w")

        self.standard_misha_script(MISHA_template)

        MISHA_template.close()
