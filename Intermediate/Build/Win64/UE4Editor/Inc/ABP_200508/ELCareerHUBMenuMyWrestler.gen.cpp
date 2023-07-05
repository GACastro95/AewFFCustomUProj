// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerHUBMenuMyWrestler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerHUBMenuMyWrestler() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerHUBMenuMyWrestler_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerHUBMenuMyWrestler();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerHubMenuDefaultTabBottomHelp();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerHUBMenuMyWrestler::execIsMenuTop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMenuTop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuMyWrestler::execSetMenuTopState)
	{
		P_GET_UBOOL(Z_Param_IsTop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuTopState(Z_Param_IsTop);
		P_NATIVE_END;
	}
	static FName NAME_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp = FName(TEXT("DefaultTabBottomHelp"));
	void UELCareerHUBMenuMyWrestler::DefaultTabBottomHelp(ECareerHubMenuDefaultTabBottomHelp eDefaultTabBottomHelp)
	{
		ELCareerHUBMenuMyWrestler_eventDefaultTabBottomHelp_Parms Parms;
		Parms.eDefaultTabBottomHelp=eDefaultTabBottomHelp;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp),&Parms);
	}
	static FName NAME_UELCareerHUBMenuMyWrestler_MyWrestlerOutAnimation = FName(TEXT("MyWrestlerOutAnimation"));
	void UELCareerHUBMenuMyWrestler::MyWrestlerOutAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMyWrestler_MyWrestlerOutAnimation),NULL);
	}
	static FName NAME_UELCareerHUBMenuMyWrestler_OnCancelHoldDecision = FName(TEXT("OnCancelHoldDecision"));
	void UELCareerHUBMenuMyWrestler::OnCancelHoldDecision()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMyWrestler_OnCancelHoldDecision),NULL);
	}
	static FName NAME_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit = FName(TEXT("OnChangeSaveAndExit"));
	void UELCareerHUBMenuMyWrestler::OnChangeSaveAndExit(bool bFlag)
	{
		ELCareerHUBMenuMyWrestler_eventOnChangeSaveAndExit_Parms Parms;
		Parms.bFlag=bFlag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit),&Parms);
	}
	static FName NAME_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList = FName(TEXT("OnPressedMoveSkillList"));
	void UELCareerHUBMenuMyWrestler::OnPressedMoveSkillList(int32 _addX, int32 _addY)
	{
		ELCareerHUBMenuMyWrestler_eventOnPressedMoveSkillList_Parms Parms;
		Parms._addX=_addX;
		Parms._addY=_addY;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList),&Parms);
	}
	static FName NAME_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab = FName(TEXT("OnPressedMoveSkillTab"));
	void UELCareerHUBMenuMyWrestler::OnPressedMoveSkillTab(bool _isLeft)
	{
		ELCareerHUBMenuMyWrestler_eventOnPressedMoveSkillTab_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab),&Parms);
	}
	static FName NAME_UELCareerHUBMenuMyWrestler_OnPressedMoveTab = FName(TEXT("OnPressedMoveTab"));
	void UELCareerHUBMenuMyWrestler::OnPressedMoveTab(bool _isLeft)
	{
		ELCareerHUBMenuMyWrestler_eventOnPressedMoveTab_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMyWrestler_OnPressedMoveTab),&Parms);
	}
	void UELCareerHUBMenuMyWrestler::StaticRegisterNativesUELCareerHUBMenuMyWrestler()
	{
		UClass* Class = UELCareerHUBMenuMyWrestler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsMenuTop", &UELCareerHUBMenuMyWrestler::execIsMenuTop },
			{ "SetMenuTopState", &UELCareerHUBMenuMyWrestler::execSetMenuTopState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eDefaultTabBottomHelp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eDefaultTabBottomHelp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp = { "eDefaultTabBottomHelp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuMyWrestler_eventDefaultTabBottomHelp_Parms, eDefaultTabBottomHelp), Z_Construct_UEnum_ABP_200508_ECareerHubMenuDefaultTabBottomHelp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMyWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMyWrestler, nullptr, "DefaultTabBottomHelp", nullptr, nullptr, sizeof(ELCareerHUBMenuMyWrestler_eventDefaultTabBottomHelp_Parms), Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics
	{
		struct ELCareerHUBMenuMyWrestler_eventIsMenuTop_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerHUBMenuMyWrestler_eventIsMenuTop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuMyWrestler_eventIsMenuTop_Parms), &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMyWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMyWrestler, nullptr, "IsMenuTop", nullptr, nullptr, sizeof(ELCareerHUBMenuMyWrestler_eventIsMenuTop_Parms), Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_MyWrestlerOutAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_MyWrestlerOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMyWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_MyWrestlerOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMyWrestler, nullptr, "MyWrestlerOutAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_MyWrestlerOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_MyWrestlerOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_MyWrestlerOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_MyWrestlerOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnCancelHoldDecision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnCancelHoldDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMyWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnCancelHoldDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMyWrestler, nullptr, "OnCancelHoldDecision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnCancelHoldDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnCancelHoldDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnCancelHoldDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnCancelHoldDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics
	{
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerHUBMenuMyWrestler_eventOnChangeSaveAndExit_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuMyWrestler_eventOnChangeSaveAndExit_Parms), &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMyWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMyWrestler, nullptr, "OnChangeSaveAndExit", nullptr, nullptr, sizeof(ELCareerHUBMenuMyWrestler_eventOnChangeSaveAndExit_Parms), Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::NewProp__addX = { "_addX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuMyWrestler_eventOnPressedMoveSkillList_Parms, _addX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::NewProp__addY = { "_addY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuMyWrestler_eventOnPressedMoveSkillList_Parms, _addY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::NewProp__addX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::NewProp__addY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMyWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMyWrestler, nullptr, "OnPressedMoveSkillList", nullptr, nullptr, sizeof(ELCareerHUBMenuMyWrestler_eventOnPressedMoveSkillList_Parms), Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELCareerHUBMenuMyWrestler_eventOnPressedMoveSkillTab_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuMyWrestler_eventOnPressedMoveSkillTab_Parms), &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMyWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMyWrestler, nullptr, "OnPressedMoveSkillTab", nullptr, nullptr, sizeof(ELCareerHUBMenuMyWrestler_eventOnPressedMoveSkillTab_Parms), Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELCareerHUBMenuMyWrestler_eventOnPressedMoveTab_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuMyWrestler_eventOnPressedMoveTab_Parms), &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMyWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMyWrestler, nullptr, "OnPressedMoveTab", nullptr, nullptr, sizeof(ELCareerHUBMenuMyWrestler_eventOnPressedMoveTab_Parms), Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics
	{
		struct ELCareerHUBMenuMyWrestler_eventSetMenuTopState_Parms
		{
			bool IsTop;
		};
		static void NewProp_IsTop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::NewProp_IsTop_SetBit(void* Obj)
	{
		((ELCareerHUBMenuMyWrestler_eventSetMenuTopState_Parms*)Obj)->IsTop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::NewProp_IsTop = { "IsTop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuMyWrestler_eventSetMenuTopState_Parms), &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::NewProp_IsTop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::NewProp_IsTop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMyWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMyWrestler, nullptr, "SetMenuTopState", nullptr, nullptr, sizeof(ELCareerHUBMenuMyWrestler_eventSetMenuTopState_Parms), Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerHUBMenuMyWrestler_NoRegister()
	{
		return UELCareerHUBMenuMyWrestler::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerHUBMenuMyWrestler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerHUBMenuMyWrestler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerHUBMenuMyWrestler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_DefaultTabBottomHelp, "DefaultTabBottomHelp" }, // 2448046307
		{ &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_IsMenuTop, "IsMenuTop" }, // 4247938026
		{ &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_MyWrestlerOutAnimation, "MyWrestlerOutAnimation" }, // 2196324620
		{ &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnCancelHoldDecision, "OnCancelHoldDecision" }, // 3865944275
		{ &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnChangeSaveAndExit, "OnChangeSaveAndExit" }, // 1870341157
		{ &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillList, "OnPressedMoveSkillList" }, // 756493505
		{ &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveSkillTab, "OnPressedMoveSkillTab" }, // 3948536056
		{ &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_OnPressedMoveTab, "OnPressedMoveTab" }, // 1319805776
		{ &Z_Construct_UFunction_UELCareerHUBMenuMyWrestler_SetMenuTopState, "SetMenuTopState" }, // 518938213
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuMyWrestler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerHUBMenuMyWrestler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMyWrestler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerHUBMenuMyWrestler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerHUBMenuMyWrestler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerHUBMenuMyWrestler_Statics::ClassParams = {
		&UELCareerHUBMenuMyWrestler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuMyWrestler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuMyWrestler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerHUBMenuMyWrestler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerHUBMenuMyWrestler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerHUBMenuMyWrestler, 1455199105);
	template<> ABP_200508_API UClass* StaticClass<UELCareerHUBMenuMyWrestler>()
	{
		return UELCareerHUBMenuMyWrestler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerHUBMenuMyWrestler(Z_Construct_UClass_UELCareerHUBMenuMyWrestler, &UELCareerHUBMenuMyWrestler::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerHUBMenuMyWrestler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerHUBMenuMyWrestler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
