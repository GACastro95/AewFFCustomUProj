// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerHUBMenuOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerHUBMenuOption() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerHUBMenuOption_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerHUBMenuOption();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerHubMenuDefaultTabBottomHelp();
// End Cross Module References
	static FName NAME_UELCareerHUBMenuOption_BackToOption = FName(TEXT("BackToOption"));
	void UELCareerHUBMenuOption::BackToOption()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuOption_BackToOption),NULL);
	}
	static FName NAME_UELCareerHUBMenuOption_DefaultTabBottomHelp = FName(TEXT("DefaultTabBottomHelp"));
	void UELCareerHUBMenuOption::DefaultTabBottomHelp(ECareerHubMenuDefaultTabBottomHelp eDefaultTabBottomHelp)
	{
		ELCareerHUBMenuOption_eventDefaultTabBottomHelp_Parms Parms;
		Parms.eDefaultTabBottomHelp=eDefaultTabBottomHelp;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuOption_DefaultTabBottomHelp),&Parms);
	}
	static FName NAME_UELCareerHUBMenuOption_OnChangeSaveAndExit = FName(TEXT("OnChangeSaveAndExit"));
	void UELCareerHUBMenuOption::OnChangeSaveAndExit(bool bFlag)
	{
		ELCareerHUBMenuOption_eventOnChangeSaveAndExit_Parms Parms;
		Parms.bFlag=bFlag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuOption_OnChangeSaveAndExit),&Parms);
	}
	static FName NAME_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor = FName(TEXT("OnMoveCareerDifficultyCursor"));
	void UELCareerHUBMenuOption::OnMoveCareerDifficultyCursor(int32 _move)
	{
		ELCareerHUBMenuOption_eventOnMoveCareerDifficultyCursor_Parms Parms;
		Parms._move=_move;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor),&Parms);
	}
	static FName NAME_UELCareerHUBMenuOption_OnMoveCareerSubtitlesCursor = FName(TEXT("OnMoveCareerSubtitlesCursor"));
	void UELCareerHUBMenuOption::OnMoveCareerSubtitlesCursor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuOption_OnMoveCareerSubtitlesCursor),NULL);
	}
	static FName NAME_UELCareerHUBMenuOption_OnPressedMoveTab = FName(TEXT("OnPressedMoveTab"));
	void UELCareerHUBMenuOption::OnPressedMoveTab(bool _isLeft)
	{
		ELCareerHUBMenuOption_eventOnPressedMoveTab_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuOption_OnPressedMoveTab),&Parms);
	}
	static FName NAME_UELCareerHUBMenuOption_SaveAndExitOutAnimation = FName(TEXT("SaveAndExitOutAnimation"));
	void UELCareerHUBMenuOption::SaveAndExitOutAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuOption_SaveAndExitOutAnimation),NULL);
	}
	void UELCareerHUBMenuOption::StaticRegisterNativesUELCareerHUBMenuOption()
	{
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuOption_BackToOption_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuOption_BackToOption_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuOption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuOption_BackToOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuOption, nullptr, "BackToOption", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuOption_BackToOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_BackToOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuOption_BackToOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuOption_BackToOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eDefaultTabBottomHelp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eDefaultTabBottomHelp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp = { "eDefaultTabBottomHelp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuOption_eventDefaultTabBottomHelp_Parms, eDefaultTabBottomHelp), Z_Construct_UEnum_ABP_200508_ECareerHubMenuDefaultTabBottomHelp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuOption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuOption, nullptr, "DefaultTabBottomHelp", nullptr, nullptr, sizeof(ELCareerHUBMenuOption_eventDefaultTabBottomHelp_Parms), Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics
	{
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerHUBMenuOption_eventOnChangeSaveAndExit_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuOption_eventOnChangeSaveAndExit_Parms), &Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuOption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuOption, nullptr, "OnChangeSaveAndExit", nullptr, nullptr, sizeof(ELCareerHUBMenuOption_eventOnChangeSaveAndExit_Parms), Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__move;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics::NewProp__move = { "_move", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuOption_eventOnMoveCareerDifficultyCursor_Parms, _move), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics::NewProp__move,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuOption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuOption, nullptr, "OnMoveCareerDifficultyCursor", nullptr, nullptr, sizeof(ELCareerHUBMenuOption_eventOnMoveCareerDifficultyCursor_Parms), Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerSubtitlesCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerSubtitlesCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuOption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerSubtitlesCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuOption, nullptr, "OnMoveCareerSubtitlesCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerSubtitlesCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerSubtitlesCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerSubtitlesCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerSubtitlesCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELCareerHUBMenuOption_eventOnPressedMoveTab_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuOption_eventOnPressedMoveTab_Parms), &Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuOption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuOption, nullptr, "OnPressedMoveTab", nullptr, nullptr, sizeof(ELCareerHUBMenuOption_eventOnPressedMoveTab_Parms), Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuOption_SaveAndExitOutAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuOption_SaveAndExitOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuOption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuOption_SaveAndExitOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuOption, nullptr, "SaveAndExitOutAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuOption_SaveAndExitOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuOption_SaveAndExitOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuOption_SaveAndExitOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuOption_SaveAndExitOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerHUBMenuOption_NoRegister()
	{
		return UELCareerHUBMenuOption::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerHUBMenuOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerHUBMenuOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerHUBMenuOption_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerHUBMenuOption_BackToOption, "BackToOption" }, // 811843862
		{ &Z_Construct_UFunction_UELCareerHUBMenuOption_DefaultTabBottomHelp, "DefaultTabBottomHelp" }, // 956233123
		{ &Z_Construct_UFunction_UELCareerHUBMenuOption_OnChangeSaveAndExit, "OnChangeSaveAndExit" }, // 3119858622
		{ &Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerDifficultyCursor, "OnMoveCareerDifficultyCursor" }, // 2092756853
		{ &Z_Construct_UFunction_UELCareerHUBMenuOption_OnMoveCareerSubtitlesCursor, "OnMoveCareerSubtitlesCursor" }, // 3840303204
		{ &Z_Construct_UFunction_UELCareerHUBMenuOption_OnPressedMoveTab, "OnPressedMoveTab" }, // 1917619724
		{ &Z_Construct_UFunction_UELCareerHUBMenuOption_SaveAndExitOutAnimation, "SaveAndExitOutAnimation" }, // 1041489934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuOption_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerHUBMenuOption.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuOption.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerHUBMenuOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerHUBMenuOption>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerHUBMenuOption_Statics::ClassParams = {
		&UELCareerHUBMenuOption::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerHUBMenuOption()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerHUBMenuOption_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerHUBMenuOption, 3928496250);
	template<> ABP_200508_API UClass* StaticClass<UELCareerHUBMenuOption>()
	{
		return UELCareerHUBMenuOption::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerHUBMenuOption(Z_Construct_UClass_UELCareerHUBMenuOption, &UELCareerHUBMenuOption::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerHUBMenuOption"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerHUBMenuOption);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
