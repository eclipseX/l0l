string usetxt, type;

str =  shorter(command,4);

if(command[4] == '\0'){
    useCommand();
}
else{


    if(strcmp(str, "patpat") == 0);

    // Injector Modules
    else if(strcmp(str, "patpat") == 0){
        usetxt=str;
        type = "injector";
    }

    // Encoder Modules
    else if(strcmp(str, "kaka") == 0){
        usetxt=str;
        type = "encoder";
    }


    // Shellcode Modules
    else if(strcmp(str, "taktak") == 0){
        usetxt=str;
        type = "shellcode";
    }

    // Backdoor Modules
    #include "backdoors/b_modules.cpp"


    else{
        // Set Red Color
        rlutil::setColor(12);
        printf("[-] Unknown module: %s\n", str);
        goto mainConsole;
    }

    //  By type of Console launch.

    if(type == "injector"){
        #include "injectors/i_console.cpp"
    }
    else if(type == "encoder"){
        #include "encoders/e_console.cpp"
    }
    else if(type == "shellcode"){
        #include "shellcodes/s_console.cpp"
    }
    else if(type == "backdoor"){
        string lhost = "None", lport = "None";
        #include "backdoors/b_console.cpp"
    }


}
