/*
 ============================================================================
 Name        : fitness.c
 Author      : Hannah M. Peeler
 Version     : 1.0
 Copyright   : 
 
    Copyright 2019 Arm Inc., Andrew Sloss, Hannah Peeler

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    Please refer to 
    https://github.com/ARM-software/Shackleton-Framework/blob/master/LICENSE.TXT
    for a full overview of the license covering this work.
    
 Description : Main and helper functions for determining the fitness
               of an individual and using that fitness value within
               the evolution process
 ============================================================================
 */

/*
 * IMPORT
 */

#include "fitness.h"

/*
 * ROUTINES
 */

/*
 * NAME
 *
 *   fitness_pre_cache_simple
 *
 * DESCRIPTION
 *
 *  Creates a file that describes the control values for fitness using LLVM opt
 *
 * PARAMETERS
 *
 *  char* folder - the main run folder that the control will be saved to
 *  char* bool - whether or not caching is being used
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * if (object_type == SIMPLE) {
 *     fitness_pre_cache_simple(main_folder, test_file);   
 * }
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

void fitness_pre_cache_simple(char* folder, bool cache) {

    // do nothing, default for now

}

/*
 * NAME
 *
 *   fitness_cache_simple
 *
 * DESCRIPTION
 *
 *  Creates a file that describes an individual along with their fitness
 *
 * PARAMETERS
 *
 *  double fitness - the fitness of the individual in question
 *  node_str* indiv - the individual that is to be evaluated
 *  char* cache_file - the file that will hold the outputted information
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * if (cache) {
 *     fitness_cache_simple(fit, indiv, cache_file);   
 * }
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

void fitness_cache_simple(double fitness, node_str* indiv, char* cache_file) {

    // do nothing, default for now

}

/*
 * NAME
 *
 *   fitness_simple
 *
 * DESCRIPTION
 *
 *  Calculates the fitness value specifically for a simple
 *  individual, currently is only a default
 *
 * PARAMETERS
 *
 *  node_str* indiv - the individual that is to be evaluated
 *  bool vis - whether or not visualization is enabled
 *
 * RETURN
 *
 *  uint32_t - the fitness value for indiv
 *
 * EXAMPLE
 *
 * uint32_t simple_fit = fitness_simple(node, true);
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

uint32_t fitness_simple(node_str* indiv, bool vis) {

    return 100 * (rand() / (RAND_MAX + 1.0)); 

}

/*
 * NAME
 *
 *   fitness_pre_cache_assembler
 *
 * DESCRIPTION
 *
 *  Creates a file that describes the control values for fitness using LLVM opt
 *
 * PARAMETERS
 *
 *  char* folder - the main run folder that the control will be saved to
 *  char* bool - whether or not caching is being used
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * if (object_type == ASSEMBLER) {
 *     fitness_pre_cache_assembler(main_folder, test_file);   
 * }
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

void fitness_pre_cache_assembler(char* folder, bool cache) {

    // do nothing, default for now

}

/*
 * NAME
 *
 *   fitness_cache_assembler
 *
 * DESCRIPTION
 *
 *  Creates a file that describes an individual along with their fitness
 *
 * PARAMETERS
 *
 *  double fitness - the fitness of the individual in question
 *  node_str* indiv - the individual that is to be evaluated
 *  char* cache_file - the file that will hold the outputted information
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * if (cache) {
 *     fitness_cache_assembler(fit, indiv, cache_file);   
 * }
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

void fitness_cache_assembler(double fitness, node_str* indiv, char* cache_file) {

    // do nothing, default for now

}

/*
 * NAME
 *
 *   fitness_assembler
 *
 * DESCRIPTION
 *
 *  Calculates the fitness value specifically for an assembler
 *  individual, currently is only a default
 *
 * PARAMETERS
 *
 *  node_str* indiv - the individual that is to be evaluated
 *  bool vis - whether or not visualization is enabled
 *
 * RETURN
 *
 *  uint32_t - the fitness value for indiv
 *
 * EXAMPLE
 *
 * uint32_t assembler_fit = fitness_assembler(node, true);
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

uint32_t fitness_assembler(node_str* indiv, bool vis) {

    return 100 * (rand() / (RAND_MAX + 1.0)); 

}

/*
 * NAME
 *
 *   fitness_pre_cache_osaka_string
 *
 * DESCRIPTION
 *
 *  Creates a file that describes the control values for fitness using LLVM opt
 *
 * PARAMETERS
 *
 *  char* folder - the main run folder that the control will be saved to
 *  char* bool - whether or not caching is being used
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * if (object_type == OSAKA_STRING) {
 *     fitness_pre_cache_osaka_string(main_folder, test_file);   
 * }
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

void fitness_pre_cache_osaka_string(char* folder, bool cache) {

    // do nothing, default for now

}

/*
 * NAME
 *
 *   fitness_cache_osaka_string
 *
 * DESCRIPTION
 *
 *  Creates a file that describes an individual along with their fitness
 *
 * PARAMETERS
 *
 *  double fitness - the fitness of the individual in question
 *  node_str* indiv - the individual that is to be evaluated
 *  char* cache_file - the file that will hold the outputted information
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * if (cache) {
 *     fitness_cache_osaka_string(fit, indiv, cache_file);   
 * }
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

void fitness_cache_osaka_string(double fitness, node_str* indiv, char* cache_file) {

    // do nothing, default for now

}

/*
 * NAME
 *
 *   fitness_osaka_string
 *
 * DESCRIPTION
 *
 *  Calculates the fitness value specifically for an osaka_string
 *  individual, currently is only a default
 *
 * PARAMETERS
 *
 *  node_str* indiv - the individual that is to be evaluated
 *  bool vis - whether or not visualization is enabled
 *
 * RETURN
 *
 *  uint32_t - the fitness value for indiv
 *
 * EXAMPLE
 *
 * uint32_t osaka_string_fit = fitness_osaka_string(node, true);
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

uint32_t fitness_osaka_string(node_str* indiv, bool vis) {

    return 100 * (rand() / (RAND_MAX + 1.0)); 

}

/*
 * NAME
 *
 *   fitness_pre_cache_llvm_pass
 *
 * DESCRIPTION
 *
 *  Creates a file that describes the control values for fitness using LLVM opt
 *
 * PARAMETERS
 *
 *  char* folder - the main run folder that the control will be saved to
 *  char* test_file - the file that will be measured for its control values
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * if (object_type == LLVM_PASS) {
 *     fitness_pre_cache_llvm_pass(main_folder, test_file);   
 * }
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

void fitness_pre_cache_llvm_pass(char* folder, char* test_file, char** src_files, uint32_t num_src_files, bool cache) {

    char build_command[5000];
    strcpy(build_command, "");

    llvm_form_build_ll_command(src_files, num_src_files, test_file, build_command);

    printf("build command: %s\n\n", build_command);

    llvm_run_command(build_command);

    if (cache) {

        struct timeval start, end; 
        uint32_t result = 0;
        uint32_t num_runs = 5;

        double total_time = 0.0;
        double time_taken = 0.0;

        char test_file_name[30];
        char base_name[60];
        char time_str[50];

        char bc_command[1000];
        char run_command[1000];
        char opt_command[1000];

        strcpy(test_file_name, test_file);
        char* p = strchr(test_file_name, '.');

        strcpy(base_name, "src/files/llvm/");

        if (!p) {
            printf("File must have valid extension such as .c or .cpp.\n\nAborting code\n\n");
            exit(0);
        }
        *p = 0;

        strcpy(bc_command, "llvm-as ");
        strcat(bc_command, base_name);
        strcat(bc_command, test_file_name);
        strcat(bc_command, "_linked.ll");

        strcpy(run_command, "lli ");
        strcat(run_command, base_name);
        strcat(run_command, test_file_name);
        strcat(run_command, "_linked.bc");

        strcpy(opt_command, "opt ");
        strcat(opt_command, base_name);
        strcat(opt_command, test_file_name);
        strcat(opt_command, "_linked.ll -S -o ");
        strcat(opt_command, base_name);
        strcat(opt_command, test_file_name);
        strcat(opt_command, "_linked_opt.ll");

        printf("\nRunning the commands for no optimizaton\n");
        llvm_run_command(bc_command);

        for (uint32_t runs = 0; runs < num_runs; runs++) {

            gettimeofday(&start, NULL);
            result = llvm_run_command(run_command);
            gettimeofday(&end, NULL);

            time_taken = (end.tv_sec - start.tv_sec) * 1e6;
            time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;

            total_time = total_time + time_taken;

        }

        time_taken = total_time / num_runs;
        sprintf(time_str, "%f", time_taken);

        char no_opt_file[60];
        char no_opt_file_str[5000];

        strcpy(no_opt_file, folder);
        strcat(no_opt_file, "/original_no_optimization.txt");
        strcpy(no_opt_file_str, "Description for original file with no optimization applied\n\nThe fitness of the individual is the time it takes to complete the testing script provided in seconds. Lower fitness is better.\n\nFitness of this individual: ");
        strcat(no_opt_file_str, time_str);
        strcat(no_opt_file_str, " sec");

        FILE* no_opt_file_ptr = fopen(no_opt_file, "w");
        fputs(no_opt_file_str, no_opt_file_ptr);
        fclose(no_opt_file_ptr);

        printf("Done. Time taken was %f\n\n", time_taken);
        time_taken = 0.0;
        total_time = 0.0;

        printf("\nRunning the commands with optimizaton\n");
        llvm_run_command(opt_command);
        llvm_run_command(bc_command);

        for (uint32_t runs = 0; runs < num_runs; runs++) {

            gettimeofday(&start, NULL);
            result = llvm_run_command(run_command);
            gettimeofday(&end, NULL);

            time_taken = (end.tv_sec - start.tv_sec) * 1e6;
            time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;

            total_time = total_time + time_taken;

        }

        time_taken = total_time / num_runs;
        sprintf(time_str, "%f", time_taken);

        char basic_opt_file[60];
        char basic_opt_file_str[5000];

        strcpy(basic_opt_file, folder);
        strcat(basic_opt_file, "/original_basic_optimization.txt");
        strcpy(basic_opt_file_str, "Description for original file with only basic optimization applied\n\nThe fitness of the individual is the time it takes to complete the testing script provided in seconds. Lower fitness is better.\n\nFitness of this individual: ");
        strcat(basic_opt_file_str, time_str);
        strcat(basic_opt_file_str, " sec");

        FILE* basic_opt_file_ptr = fopen(basic_opt_file, "w");
        fputs(basic_opt_file_str, basic_opt_file_ptr);
        fclose(basic_opt_file_ptr);

        printf("Done. Time taken was %f\n\n", time_taken);

    }

}

/*
 * NAME
 *
 *   fitness_cache_llvm_pass
 *
 * DESCRIPTION
 *
 *  Creates a file that describes an individual along with their fitness
 *
 * PARAMETERS
 *
 *  double fitness - the fitness of the individual in question
 *  node_str* indiv - the individual that is to be evaluated
 *  char* cache_file - the file that will hold the outputted information
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * if (cache) {
 *     fitness_cache_llvm_pass(fit, indiv, cache_file);   
 * }
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

void fitness_cache_llvm_pass(double fitness, node_str* indiv, char* cache_file) {

    char string[30000];
    char fitness_num[100];
    char input_str[10000];
    char output_str[10000];
    
    strcpy(string, "Description file for Individual 1\n\nHere are the passes in this individual, in order:\n\n");
    sprintf(fitness_num, "%f", fitness);
    strcpy(input_str, "");
    strcpy(output_str, "");

    /*FILE *input;
    FILE *output;
    char* line = NULL;
    size_t len = 0;
    size_t read;
    input = fopen(input_file, "r");
    if (input == NULL) {
        exit(EXIT_FAILURE);
    }
    while ((read = getline(&line, &len, input)) != -1) {
        strcat(input_str, line);
    }
    output = fopen(output_file, "r");
    if (output == NULL) {
        exit(EXIT_FAILURE);
    }
    while ((read = getline(&line, &len, output)) != -1) {
        strcat(output_str, line);
    }*/

    while (NEXT(indiv) != NULL) {
        char desc[60];
        strcpy(desc, "");
        osaka_describenode(desc, indiv);
        strcat(string, desc);
        strcat(string, "\n");
        indiv = NEXT(indiv);
    }

    char desc[60];
    strcpy(desc, "");
    osaka_describenode(desc, indiv);
    strcat(string, desc);
    /*strcat(string, "\n\nHere is the input file before optimization was applied: \n\n###########################################################################################################################\n\n");
    strcat(string, input_str);
    strcat(string, "\n\n###########################################################################################################################\n\n");
    strcat(string, "And here is the file after optimization: \n\n###########################################################################################################################\n\n");
    strcat(string, output_str);
    strcat(string, "\n\n###########################################################################################################################");*/
    strcat(string, "\n\nThe fitness of the individual is the time it takes to complete the testing script provided in seconds after the specified optimization passes are applied. Lower fitness is better.\n\nFitness of this individual: ");
    strcat(string, fitness_num);
    strcat(string, " sec");

    FILE* file_ptr = fopen(cache_file, "w");
    fputs(string, file_ptr);

    //fclose(input);
    //fclose(output);
    fclose(file_ptr);

    //free(line);

}

/*
 * NAME
 *
 *   fitness_llvm_pass
 *
 * DESCRIPTION
 *
 *  Calculates the fitness value specifically for an llvm pass
 *  individual, based on the optimization of the code outputted
 *
 * PARAMETERS
 *
 *  node_str* indiv - the individual that is to be evaluated
 *  bool vis - whether or not visualization is enabled
 *
 * RETURN
 *
 *  double - the fitness value for indiv
 *
 * EXAMPLE
 *
 *  double llvm_pass_fit = fitness_llvm_pass(node, true);
 *
 * SIDE-EFFECT
 *
 *  none
 *
 */

double fitness_llvm_pass(node_str* indiv, char* file, char** src_files, uint32_t num_src_files, bool vis, bool cache, char* cache_file) {

    double fitness = 100.0;
    uint32_t num_runs = 5;

    char file_name[30];
    char base_name[60];
    char input_file[60];
    char output_file[60];

    struct timeval start, end; 
    uint32_t result = 0;

    strcpy(file_name, file);
    char* p = strchr(file_name, '.');

    strcpy(base_name, "src/files/llvm/");

    if (!p) {
        printf("File must have valid extension such as .c or .cpp.\n\nAborting code\n\n");
        exit(0);
    }
    *p = 0;

    strcpy(input_file, base_name);
    strcat(input_file, file_name);
    strcat(input_file, "_linked.ll");

    strcpy(output_file, base_name);
    strcat(output_file, "junk_output/");
    strcat(output_file, file_name);
    strcat(output_file, "_linked_temp.ll");

    if (vis) {

        printf("Calculating fitness of individual\n");

    }

    char opt_command[5000];
    char run_command[5000];
    strcpy(opt_command, "");
    strcpy(run_command, "");

    llvm_form_opt_command(indiv, NULL, 0, input_file, output_file, opt_command);
    llvm_form_exec_code_command_from_ll(output_file, run_command);

    printf("opt command: %s\n\nrun command: %s\n\n", opt_command, run_command);

    llvm_run_command(opt_command);

    double total_time = 0.0;
    double time_taken = 0.0;

    gettimeofday(&start, NULL);
    for (uint32_t runs = 0; runs < num_runs; runs++) {

        gettimeofday(&start, NULL);
        result = llvm_run_command(run_command);
        gettimeofday(&end, NULL);

        time_taken = (end.tv_sec - start.tv_sec) * 1e6;
        time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;

        total_time = total_time + time_taken;

    }

    time_taken = total_time / num_runs;

    printf("Run command took %f seconds to run, on average over %d runs\n\n", time_taken, num_runs);
    fitness = time_taken;
    if (result > 0) {

        fitness = UINT32_MAX;
    
    }

    if (cache) {

        fitness_cache_llvm_pass(fitness, indiv, cache_file);

    }

    return fitness;

}

/*
 * NAME
 *
 *   fitness_pre_cache_binary_up_to_512
 *
 * DESCRIPTION
 *
 *  Creates a file that describes the control values for fitness using LLVM opt
 *
 * PARAMETERS
 *
 *  char* folder - the main run folder that the control will be saved to
 *  char* bool - whether or not caching is being used
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * if (object_type == BINARY_UP_TO_512) {
 *     fitness_pre_cache_llvm_pass(main_folder, test_file);   
 * }
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

void fitness_pre_cache_binary_up_to_512(char* folder, bool cache) {

    // do nothing, default for now

}

/*
 * NAME
 *
 *   fitness_cache_binary_up_to_512
 *
 * DESCRIPTION
 *
 *  Creates a file that describes an individual along with their fitness
 *
 * PARAMETERS
 *
 *  double fitness - the fitness of the individual in question
 *  node_str* indiv - the individual that is to be evaluated
 *  char* cache_file - the file that will hold the outputted information
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * if (cache) {
 *     fitness_cache_binary_up_to_512(fit, indiv, cache_file);   
 * }
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

void fitness_cache_binary_up_to_512(double fitness, node_str* indiv, char* cache_file) {

    // do nothing, default for now

}

/*
 * NAME
 *
 *   fitness_binary_up_to_512
 *
 * DESCRIPTION
 *
 * Calculates the fitness value specifically for an binary_up_to_512
 * inidividual, currently is only a default. AUTO-GENERATED
 *
 * PARAMETERS
 *
 *  node_str* indiv - the individual that is to be evaluated
 *  bool vis - whether or not visualization is enabled
 *
 * RETURN
 *
 *  uint32_t - the fitness value for indiv
 *
 * EXAMPLE
 *
 * uint32_t binary_up_to_512_fit = fitness_binary_up_to_512(node, true);
 *
 * SIDE-EFFECT
 *
 * none
 *
 */

uint32_t fitness_binary_up_to_512(node_str* indiv, bool vis) {

	return 100 * (rand() / (RAND_MAX + 1.0)); 

}

/*
 * NAME
 *
 *  fitness_pre_cache
 *
 * DESCRIPTION
 *
 *  Does an initial setup cache, is dependent on the object type
 *
 * PARAMETERS
 *
 *  char* folder - the folder where the pre caching files will be housed
 *  char* file - for some object types, will be a file used for the caching
 *  osaka_object_typ type - the object type for this evolutionary run
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 *  if (cache) {
 *      fitness_pre_cache(main_folder, test_file, ot);    
 *  }
 *
 * SIDE-EFFECT
 *
 *  none
 *
 */

void fitness_pre_cache(char* folder, char* test_file, char** src_files, uint32_t num_src_files, osaka_object_typ type, bool cache) {

    if (type == 0) {    // SIMPLE
        return fitness_pre_cache_simple(folder, cache);
    }
    else if (type == 1) {   // ASSEMBLER
        return fitness_pre_cache_assembler(folder, cache);
    }
    else if (type == 2) {   // OSAKA_STRING
        return fitness_pre_cache_osaka_string(folder, cache);
    }
    else if (type == 3) { // LLVM_PASS
        return fitness_pre_cache_llvm_pass(folder, test_file, src_files, num_src_files, cache);
    }
	else if (type == 4) { // BINARY_UP_TO_512
		return fitness_pre_cache_binary_up_to_512(folder, cache);
	}

}

/*
 * NAME
 *
 *  fitness_cache
 *
 * DESCRIPTION
 *
 *  Caches 
 *
 * PARAMETERS
 *
 *  double fitness_value - the fitness value of the individual to be cached
 *  node_str* indiv - pointer to the individual to be cached
 *  char* cache_file - file where the cached information will reside
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 *  fitness_cache(value, individual, "individual1.txt");
 *
 * SIDE-EFFECT
 *
 *  none
 *
 */

void fitness_cache(double fitness_value, node_str* indiv, char* cache_file) {

    osaka_object_typ type = OBJECT_TYPE(indiv);

    if (type == 0) {    // SIMPLE
        return fitness_cache_simple(fitness_value, indiv, cache_file);
    }
    else if (type == 1) {   // ASSEMBLER
        return fitness_cache_assembler(fitness_value, indiv, cache_file);
    }
    else if (type == 2) {   // OSAKA_STRING
        return fitness_cache_osaka_string(fitness_value, indiv, cache_file);
    }
    else if (type == 3) {   // LLVM_PASS
        return fitness_cache_llvm_pass(fitness_value, indiv, cache_file);
    }
	else if (type == 4) {   // BINARY_UP_TO_512
		return fitness_cache_binary_up_to_512(fitness_value, indiv, cache_file);
	}

}

/*
 * NAME
 *
 *  fitness_top
 *
 * DESCRIPTION
 *
 *  Applies the correct fitness function based on the
 *  specific object type of the individual
 *
 * PARAMETERS
 *
 *  node_str* indiv - the individual that is to be evaluated
 *  bool vis - whether or not visualization is enabled
 *
 * RETURN
 *
 *  double - the fitness value for indiv
 *
 * EXAMPLE
 *
 *  double fitness = fitness_top(node, true);
 *
 * SIDE-EFFECT
 *
 *  none
 *
 */

double fitness_top(node_str* indiv, bool vis, char* test_file, char** src_files, uint32_t num_src_files, bool cache, char* cache_file) {

    osaka_object_typ type = OBJECT_TYPE(indiv);

    // the fitness function depends on the object type
    if (type == 0) {    // SIMPLE
        return fitness_simple(indiv, vis);
    }
    else if (type == 1) {   // ASSEMBLER
        return fitness_assembler(indiv, vis);
    }
    else if (type == 2) {   // OSAKA_STRING
        return fitness_osaka_string(indiv, vis);
    }
    else if (type == 3) {   // LLVM_PASS
        return fitness_llvm_pass(indiv, test_file, src_files, num_src_files, vis, cache, cache_file);
    }
	else if (type == 4) {   // BINARY_UP_TO_512
		return fitness_binary_up_to_512(indiv, vis);
	}
    else {
        return 100;
    }

}

/*
 * NAME
 *
 *   fitness_setup
 *
 * DESCRIPTION
 *
 *  initializes all typdefs for function pointers to their
 *  respective methods in fitness.h
 *
 * PARAMETERS
 *
 *  none
 *
 * RETURN
 *
 *  none
 *
 * EXAMPLE
 *
 * fitness_setup();
 *
 * SIDE-EFFECT
 *
 * alters the typedefs
 *
 */

void fitness_setup() {

    fpfitness_simple = &fitness_simple;
    fpfitness_assembler = &fitness_assembler;
    fpfitness_osaka_string = &fitness_osaka_string;
    fpfitness_llvm_pass = &fitness_llvm_pass;
	fpfitness_binary_up_to_512 = &fitness_binary_up_to_512;

}