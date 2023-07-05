// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTutorialExecutorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTutorialExecutorBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELTutorialExecutorBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELTutorialExecutorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FExecuteTutorialDialogParam();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_TutorialCompleteDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_TutorialStartWaitState__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AELTutorialExecutorBase::execEndTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTutorial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELTutorialExecutorBase::execOnStartTutorial)
	{
		P_GET_STRUCT(FExecuteTutorialDialogParam,Z_Param__targetParam);
		P_GET_UBOOL(Z_Param__displayDecideBtn);
		P_GET_UBOOL(Z_Param__displayBottomHelp);
		P_GET_UBOOL(Z_Param__loadingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartTutorial_Implementation(Z_Param__targetParam,Z_Param__displayDecideBtn,Z_Param__displayBottomHelp,Z_Param__loadingAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELTutorialExecutorBase::execStartWaitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWaitState();
		P_NATIVE_END;
	}
	static FName NAME_AELTutorialExecutorBase_ExecuteManualEndTutorial = FName(TEXT("ExecuteManualEndTutorial"));
	void AELTutorialExecutorBase::ExecuteManualEndTutorial()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELTutorialExecutorBase_ExecuteManualEndTutorial),NULL);
	}
	static FName NAME_AELTutorialExecutorBase_OnPressFaceButtonDown = FName(TEXT("OnPressFaceButtonDown"));
	void AELTutorialExecutorBase::OnPressFaceButtonDown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELTutorialExecutorBase_OnPressFaceButtonDown),NULL);
	}
	static FName NAME_AELTutorialExecutorBase_OnPressFaceButtonRight = FName(TEXT("OnPressFaceButtonRight"));
	void AELTutorialExecutorBase::OnPressFaceButtonRight()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELTutorialExecutorBase_OnPressFaceButtonRight),NULL);
	}
	static FName NAME_AELTutorialExecutorBase_OnPressLeft = FName(TEXT("OnPressLeft"));
	void AELTutorialExecutorBase::OnPressLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELTutorialExecutorBase_OnPressLeft),NULL);
	}
	static FName NAME_AELTutorialExecutorBase_OnPressRight = FName(TEXT("OnPressRight"));
	void AELTutorialExecutorBase::OnPressRight()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELTutorialExecutorBase_OnPressRight),NULL);
	}
	static FName NAME_AELTutorialExecutorBase_OnPseudoChangePage = FName(TEXT("OnPseudoChangePage"));
	void AELTutorialExecutorBase::OnPseudoChangePage(bool isRight)
	{
		ELTutorialExecutorBase_eventOnPseudoChangePage_Parms Parms;
		Parms.isRight=isRight ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELTutorialExecutorBase_OnPseudoChangePage),&Parms);
	}
	static FName NAME_AELTutorialExecutorBase_OnPseudoPushButtonOK = FName(TEXT("OnPseudoPushButtonOK"));
	void AELTutorialExecutorBase::OnPseudoPushButtonOK()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELTutorialExecutorBase_OnPseudoPushButtonOK),NULL);
	}
	static FName NAME_AELTutorialExecutorBase_OnStartTutorial = FName(TEXT("OnStartTutorial"));
	void AELTutorialExecutorBase::OnStartTutorial(FExecuteTutorialDialogParam _targetParam, bool _displayDecideBtn, bool _displayBottomHelp, bool _loadingAsset)
	{
		ELTutorialExecutorBase_eventOnStartTutorial_Parms Parms;
		Parms._targetParam=_targetParam;
		Parms._displayDecideBtn=_displayDecideBtn ? true : false;
		Parms._displayBottomHelp=_displayBottomHelp ? true : false;
		Parms._loadingAsset=_loadingAsset ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELTutorialExecutorBase_OnStartTutorial),&Parms);
	}
	static FName NAME_AELTutorialExecutorBase_SetDisableAutoEndTutorial = FName(TEXT("SetDisableAutoEndTutorial"));
	void AELTutorialExecutorBase::SetDisableAutoEndTutorial()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELTutorialExecutorBase_SetDisableAutoEndTutorial),NULL);
	}
	static FName NAME_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK = FName(TEXT("SetIntervalPseudoPushButtonOK"));
	void AELTutorialExecutorBase::SetIntervalPseudoPushButtonOK(float Interval)
	{
		ELTutorialExecutorBase_eventSetIntervalPseudoPushButtonOK_Parms Parms;
		Parms.Interval=Interval;
		ProcessEvent(FindFunctionChecked(NAME_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK),&Parms);
	}
	void AELTutorialExecutorBase::StaticRegisterNativesAELTutorialExecutorBase()
	{
		UClass* Class = AELTutorialExecutorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTutorial", &AELTutorialExecutorBase::execEndTutorial },
			{ "OnStartTutorial", &AELTutorialExecutorBase::execOnStartTutorial },
			{ "StartWaitState", &AELTutorialExecutorBase::execStartWaitState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_EndTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_EndTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_EndTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "EndTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_EndTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_EndTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_EndTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_EndTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_ExecuteManualEndTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_ExecuteManualEndTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_ExecuteManualEndTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "ExecuteManualEndTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_ExecuteManualEndTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_ExecuteManualEndTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_ExecuteManualEndTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_ExecuteManualEndTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "OnPressFaceButtonDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "OnPressFaceButtonRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_OnPressLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_OnPressLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_OnPressLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "OnPressLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_OnPressLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_OnPressLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_OnPressLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_OnPressLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_OnPressRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_OnPressRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_OnPressRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "OnPressRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_OnPressRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_OnPressRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_OnPressRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_OnPressRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics
	{
		static void NewProp_isRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::NewProp_isRight_SetBit(void* Obj)
	{
		((ELTutorialExecutorBase_eventOnPseudoChangePage_Parms*)Obj)->isRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::NewProp_isRight = { "isRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialExecutorBase_eventOnPseudoChangePage_Parms), &Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::NewProp_isRight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::NewProp_isRight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "OnPseudoChangePage", nullptr, nullptr, sizeof(ELTutorialExecutorBase_eventOnPseudoChangePage_Parms), Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoPushButtonOK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoPushButtonOK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoPushButtonOK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "OnPseudoPushButtonOK", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoPushButtonOK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoPushButtonOK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoPushButtonOK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoPushButtonOK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetParam;
		static void NewProp__displayDecideBtn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__displayDecideBtn;
		static void NewProp__displayBottomHelp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__displayBottomHelp;
		static void NewProp__loadingAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__loadingAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__targetParam = { "_targetParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTutorialExecutorBase_eventOnStartTutorial_Parms, _targetParam), Z_Construct_UScriptStruct_FExecuteTutorialDialogParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__displayDecideBtn_SetBit(void* Obj)
	{
		((ELTutorialExecutorBase_eventOnStartTutorial_Parms*)Obj)->_displayDecideBtn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__displayDecideBtn = { "_displayDecideBtn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialExecutorBase_eventOnStartTutorial_Parms), &Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__displayDecideBtn_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__displayBottomHelp_SetBit(void* Obj)
	{
		((ELTutorialExecutorBase_eventOnStartTutorial_Parms*)Obj)->_displayBottomHelp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__displayBottomHelp = { "_displayBottomHelp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialExecutorBase_eventOnStartTutorial_Parms), &Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__displayBottomHelp_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__loadingAsset_SetBit(void* Obj)
	{
		((ELTutorialExecutorBase_eventOnStartTutorial_Parms*)Obj)->_loadingAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__loadingAsset = { "_loadingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTutorialExecutorBase_eventOnStartTutorial_Parms), &Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__loadingAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__targetParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__displayDecideBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__displayBottomHelp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::NewProp__loadingAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "OnStartTutorial", nullptr, nullptr, sizeof(ELTutorialExecutorBase_eventOnStartTutorial_Parms), Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_SetDisableAutoEndTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_SetDisableAutoEndTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_SetDisableAutoEndTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "SetDisableAutoEndTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_SetDisableAutoEndTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_SetDisableAutoEndTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_SetDisableAutoEndTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_SetDisableAutoEndTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTutorialExecutorBase_eventSetIntervalPseudoPushButtonOK_Parms, Interval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics::NewProp_Interval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "SetIntervalPseudoPushButtonOK", nullptr, nullptr, sizeof(ELTutorialExecutorBase_eventSetIntervalPseudoPushButtonOK_Parms), Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTutorialExecutorBase_StartWaitState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTutorialExecutorBase_StartWaitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTutorialExecutorBase_StartWaitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTutorialExecutorBase, nullptr, "StartWaitState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTutorialExecutorBase_StartWaitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTutorialExecutorBase_StartWaitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTutorialExecutorBase_StartWaitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTutorialExecutorBase_StartWaitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELTutorialExecutorBase_NoRegister()
	{
		return AELTutorialExecutorBase::StaticClass();
	}
	struct Z_Construct_UClass_AELTutorialExecutorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompleteDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartWaitStateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_StartWaitStateDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELTutorialExecutorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELTutorialExecutorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_EndTutorial, "EndTutorial" }, // 4090477863
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_ExecuteManualEndTutorial, "ExecuteManualEndTutorial" }, // 1893607446
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonDown, "OnPressFaceButtonDown" }, // 1774686164
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_OnPressFaceButtonRight, "OnPressFaceButtonRight" }, // 2595619056
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_OnPressLeft, "OnPressLeft" }, // 2398181928
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_OnPressRight, "OnPressRight" }, // 592768569
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoChangePage, "OnPseudoChangePage" }, // 985012757
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_OnPseudoPushButtonOK, "OnPseudoPushButtonOK" }, // 3142358889
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_OnStartTutorial, "OnStartTutorial" }, // 3668981619
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_SetDisableAutoEndTutorial, "SetDisableAutoEndTutorial" }, // 3616639683
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_SetIntervalPseudoPushButtonOK, "SetIntervalPseudoPushButtonOK" }, // 1534483157
		{ &Z_Construct_UFunction_AELTutorialExecutorBase_StartWaitState, "StartWaitState" }, // 2923243645
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELTutorialExecutorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTutorialExecutorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELTutorialExecutorBase_Statics::NewProp_CompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTutorialExecutorBase" },
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AELTutorialExecutorBase_Statics::NewProp_CompleteDelegate = { "CompleteDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELTutorialExecutorBase, CompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_TutorialCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELTutorialExecutorBase_Statics::NewProp_CompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELTutorialExecutorBase_Statics::NewProp_CompleteDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELTutorialExecutorBase_Statics::NewProp_StartWaitStateDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTutorialExecutorBase" },
		{ "ModuleRelativePath", "Public/ELTutorialExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AELTutorialExecutorBase_Statics::NewProp_StartWaitStateDelegate = { "StartWaitStateDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELTutorialExecutorBase, StartWaitStateDelegate), Z_Construct_UDelegateFunction_ABP_200508_TutorialStartWaitState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELTutorialExecutorBase_Statics::NewProp_StartWaitStateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELTutorialExecutorBase_Statics::NewProp_StartWaitStateDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELTutorialExecutorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELTutorialExecutorBase_Statics::NewProp_CompleteDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELTutorialExecutorBase_Statics::NewProp_StartWaitStateDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELTutorialExecutorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELTutorialExecutorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELTutorialExecutorBase_Statics::ClassParams = {
		&AELTutorialExecutorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELTutorialExecutorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELTutorialExecutorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELTutorialExecutorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELTutorialExecutorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELTutorialExecutorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELTutorialExecutorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELTutorialExecutorBase, 819097708);
	template<> ABP_200508_API UClass* StaticClass<AELTutorialExecutorBase>()
	{
		return AELTutorialExecutorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELTutorialExecutorBase(Z_Construct_UClass_AELTutorialExecutorBase, &AELTutorialExecutorBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELTutorialExecutorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELTutorialExecutorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
