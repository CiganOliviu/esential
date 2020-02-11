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
