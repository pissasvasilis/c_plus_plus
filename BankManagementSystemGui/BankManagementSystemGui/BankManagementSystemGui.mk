##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=BankManagementSystemGui
ConfigurationName      :=Debug
WorkspacePath          :=/home/vasilis/Documents/programming/C++/BankManagementSystemGui
ProjectPath            :=/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=vasilis
Date                   :=10/02/21
CodeLitePath           :=/home/vasilis/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="BankManagementSystemGui.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  $(shell wx-config   --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/Edit_Window.cpp$(ObjectSuffix) $(IntermediateDirectory)/Transaction_Window.cpp$(ObjectSuffix) $(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Menu_Window.cpp$(ObjectSuffix) $(IntermediateDirectory)/See_Window.cpp$(ObjectSuffix) $(IntermediateDirectory)/Find_Customer_Window.cpp$(ObjectSuffix) $(IntermediateDirectory)/Transaction.cpp$(ObjectSuffix) $(IntermediateDirectory)/Acc_Utils.cpp$(ObjectSuffix) $(IntermediateDirectory)/New_Account_Window.cpp$(ObjectSuffix) \
	



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Edit_Window.cpp$(ObjectSuffix): Edit_Window.cpp $(IntermediateDirectory)/Edit_Window.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui/Edit_Window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Edit_Window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Edit_Window.cpp$(DependSuffix): Edit_Window.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Edit_Window.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Edit_Window.cpp$(DependSuffix) -MM Edit_Window.cpp

$(IntermediateDirectory)/Edit_Window.cpp$(PreprocessSuffix): Edit_Window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Edit_Window.cpp$(PreprocessSuffix) Edit_Window.cpp

$(IntermediateDirectory)/Transaction_Window.cpp$(ObjectSuffix): Transaction_Window.cpp $(IntermediateDirectory)/Transaction_Window.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui/Transaction_Window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Transaction_Window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Transaction_Window.cpp$(DependSuffix): Transaction_Window.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Transaction_Window.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Transaction_Window.cpp$(DependSuffix) -MM Transaction_Window.cpp

$(IntermediateDirectory)/Transaction_Window.cpp$(PreprocessSuffix): Transaction_Window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Transaction_Window.cpp$(PreprocessSuffix) Transaction_Window.cpp

$(IntermediateDirectory)/Account.cpp$(ObjectSuffix): Account.cpp $(IntermediateDirectory)/Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Account.cpp$(DependSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Account.cpp$(DependSuffix) -MM Account.cpp

$(IntermediateDirectory)/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Account.cpp$(PreprocessSuffix) Account.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Menu_Window.cpp$(ObjectSuffix): Menu_Window.cpp $(IntermediateDirectory)/Menu_Window.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui/Menu_Window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Menu_Window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Menu_Window.cpp$(DependSuffix): Menu_Window.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Menu_Window.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Menu_Window.cpp$(DependSuffix) -MM Menu_Window.cpp

$(IntermediateDirectory)/Menu_Window.cpp$(PreprocessSuffix): Menu_Window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Menu_Window.cpp$(PreprocessSuffix) Menu_Window.cpp

$(IntermediateDirectory)/See_Window.cpp$(ObjectSuffix): See_Window.cpp $(IntermediateDirectory)/See_Window.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui/See_Window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/See_Window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/See_Window.cpp$(DependSuffix): See_Window.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/See_Window.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/See_Window.cpp$(DependSuffix) -MM See_Window.cpp

$(IntermediateDirectory)/See_Window.cpp$(PreprocessSuffix): See_Window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/See_Window.cpp$(PreprocessSuffix) See_Window.cpp

$(IntermediateDirectory)/Find_Customer_Window.cpp$(ObjectSuffix): Find_Customer_Window.cpp $(IntermediateDirectory)/Find_Customer_Window.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui/Find_Customer_Window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Find_Customer_Window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Find_Customer_Window.cpp$(DependSuffix): Find_Customer_Window.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Find_Customer_Window.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Find_Customer_Window.cpp$(DependSuffix) -MM Find_Customer_Window.cpp

$(IntermediateDirectory)/Find_Customer_Window.cpp$(PreprocessSuffix): Find_Customer_Window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Find_Customer_Window.cpp$(PreprocessSuffix) Find_Customer_Window.cpp

$(IntermediateDirectory)/Transaction.cpp$(ObjectSuffix): Transaction.cpp $(IntermediateDirectory)/Transaction.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui/Transaction.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Transaction.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Transaction.cpp$(DependSuffix): Transaction.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Transaction.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Transaction.cpp$(DependSuffix) -MM Transaction.cpp

$(IntermediateDirectory)/Transaction.cpp$(PreprocessSuffix): Transaction.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Transaction.cpp$(PreprocessSuffix) Transaction.cpp

$(IntermediateDirectory)/Acc_Utils.cpp$(ObjectSuffix): Acc_Utils.cpp $(IntermediateDirectory)/Acc_Utils.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui/Acc_Utils.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Acc_Utils.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Acc_Utils.cpp$(DependSuffix): Acc_Utils.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Acc_Utils.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Acc_Utils.cpp$(DependSuffix) -MM Acc_Utils.cpp

$(IntermediateDirectory)/Acc_Utils.cpp$(PreprocessSuffix): Acc_Utils.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Acc_Utils.cpp$(PreprocessSuffix) Acc_Utils.cpp

$(IntermediateDirectory)/New_Account_Window.cpp$(ObjectSuffix): New_Account_Window.cpp $(IntermediateDirectory)/New_Account_Window.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vasilis/Documents/programming/C++/BankManagementSystemGui/BankManagementSystemGui/New_Account_Window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/New_Account_Window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/New_Account_Window.cpp$(DependSuffix): New_Account_Window.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/New_Account_Window.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/New_Account_Window.cpp$(DependSuffix) -MM New_Account_Window.cpp

$(IntermediateDirectory)/New_Account_Window.cpp$(PreprocessSuffix): New_Account_Window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/New_Account_Window.cpp$(PreprocessSuffix) New_Account_Window.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


