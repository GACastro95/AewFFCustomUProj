// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMatchResultMenuFlowControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchResultMenuFlowControllerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELMatchResultMenuFlowControllerBase();
	ABP_200508_API UClass* Z_Construct_UClass_AELInGameMenuInputEventActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchResultMenuBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AELMatchResultMenuFlowControllerBase::execGetCurrentMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELMatchResultMenuBase**)Z_Param__Result=P_THIS->GetCurrentMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultMenuFlowControllerBase::execOnClosedDisconnectedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClosedDisconnectedDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultMenuFlowControllerBase::execOnOpenedDisconnectedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOpenedDisconnectedDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultMenuFlowControllerBase::execSetMenuBG)
	{
		P_GET_OBJECT(UClass,Z_Param_InMenuBGClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuBG(Z_Param_InMenuBGClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultMenuFlowControllerBase::execSetMenuSequence)
	{
		P_GET_TARRAY(TSubclassOf<UELMatchResultMenuBase> ,Z_Param_InSeqeuence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuSequence(Z_Param_InSeqeuence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultMenuFlowControllerBase::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	static FName NAME_AELMatchResultMenuFlowControllerBase_AddToCommonLayout = FName(TEXT("AddToCommonLayout"));
	void AELMatchResultMenuFlowControllerBase::AddToCommonLayout(UELMatchResultMenuBase* ResultMenuBase)
	{
		ELMatchResultMenuFlowControllerBase_eventAddToCommonLayout_Parms Parms;
		Parms.ResultMenuBase=ResultMenuBase;
		ProcessEvent(FindFunctionChecked(NAME_AELMatchResultMenuFlowControllerBase_AddToCommonLayout),&Parms);
	}
	void AELMatchResultMenuFlowControllerBase::StaticRegisterNativesAELMatchResultMenuFlowControllerBase()
	{
		UClass* Class = AELMatchResultMenuFlowControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentMenu", &AELMatchResultMenuFlowControllerBase::execGetCurrentMenu },
			{ "OnClosedDisconnectedDialog", &AELMatchResultMenuFlowControllerBase::execOnClosedDisconnectedDialog },
			{ "OnOpenedDisconnectedDialog", &AELMatchResultMenuFlowControllerBase::execOnOpenedDisconnectedDialog },
			{ "SetMenuBG", &AELMatchResultMenuFlowControllerBase::execSetMenuBG },
			{ "SetMenuSequence", &AELMatchResultMenuFlowControllerBase::execSetMenuSequence },
			{ "Start", &AELMatchResultMenuFlowControllerBase::execStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultMenuBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultMenuBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::NewProp_ResultMenuBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::NewProp_ResultMenuBase = { "ResultMenuBase", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuFlowControllerBase_eventAddToCommonLayout_Parms, ResultMenuBase), Z_Construct_UClass_UELMatchResultMenuBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::NewProp_ResultMenuBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::NewProp_ResultMenuBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::NewProp_ResultMenuBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuFlowControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultMenuFlowControllerBase, nullptr, "AddToCommonLayout", nullptr, nullptr, sizeof(ELMatchResultMenuFlowControllerBase_eventAddToCommonLayout_Parms), Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics
	{
		struct ELMatchResultMenuFlowControllerBase_eventGetCurrentMenu_Parms
		{
			UELMatchResultMenuBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuFlowControllerBase_eventGetCurrentMenu_Parms, ReturnValue), Z_Construct_UClass_UELMatchResultMenuBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuFlowControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultMenuFlowControllerBase, nullptr, "GetCurrentMenu", nullptr, nullptr, sizeof(ELMatchResultMenuFlowControllerBase_eventGetCurrentMenu_Parms), Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnClosedDisconnectedDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnClosedDisconnectedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuFlowControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnClosedDisconnectedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultMenuFlowControllerBase, nullptr, "OnClosedDisconnectedDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnClosedDisconnectedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnClosedDisconnectedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnClosedDisconnectedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnClosedDisconnectedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnOpenedDisconnectedDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnOpenedDisconnectedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuFlowControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnOpenedDisconnectedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultMenuFlowControllerBase, nullptr, "OnOpenedDisconnectedDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnOpenedDisconnectedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnOpenedDisconnectedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnOpenedDisconnectedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnOpenedDisconnectedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics
	{
		struct ELMatchResultMenuFlowControllerBase_eventSetMenuBG_Parms
		{
			TSubclassOf<UELMatchResultMenuBase>  InMenuBGClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InMenuBGClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics::NewProp_InMenuBGClass = { "InMenuBGClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuFlowControllerBase_eventSetMenuBG_Parms, InMenuBGClass), Z_Construct_UClass_UELMatchResultMenuBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics::NewProp_InMenuBGClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuFlowControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultMenuFlowControllerBase, nullptr, "SetMenuBG", nullptr, nullptr, sizeof(ELMatchResultMenuFlowControllerBase_eventSetMenuBG_Parms), Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics
	{
		struct ELMatchResultMenuFlowControllerBase_eventSetMenuSequence_Parms
		{
			TArray<TSubclassOf<UELMatchResultMenuBase> > InSeqeuence;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InSeqeuence_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InSeqeuence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::NewProp_InSeqeuence_Inner = { "InSeqeuence", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELMatchResultMenuBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::NewProp_InSeqeuence = { "InSeqeuence", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultMenuFlowControllerBase_eventSetMenuSequence_Parms, InSeqeuence), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::NewProp_InSeqeuence_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::NewProp_InSeqeuence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuFlowControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultMenuFlowControllerBase, nullptr, "SetMenuSequence", nullptr, nullptr, sizeof(ELMatchResultMenuFlowControllerBase_eventSetMenuSequence_Parms), Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultMenuFlowControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultMenuFlowControllerBase, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_NoRegister()
	{
		return AELMatchResultMenuFlowControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELInGameMenuInputEventActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_AddToCommonLayout, "AddToCommonLayout" }, // 1514478092
		{ &Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_GetCurrentMenu, "GetCurrentMenu" }, // 1144111634
		{ &Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnClosedDisconnectedDialog, "OnClosedDisconnectedDialog" }, // 2154428111
		{ &Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_OnOpenedDisconnectedDialog, "OnOpenedDisconnectedDialog" }, // 1758614602
		{ &Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuBG, "SetMenuBG" }, // 1579544060
		{ &Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_SetMenuSequence, "SetMenuSequence" }, // 1858178763
		{ &Z_Construct_UFunction_AELMatchResultMenuFlowControllerBase_Start, "Start" }, // 2060532505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMatchResultMenuFlowControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMatchResultMenuFlowControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMatchResultMenuFlowControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_Statics::ClassParams = {
		&AELMatchResultMenuFlowControllerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMatchResultMenuFlowControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMatchResultMenuFlowControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMatchResultMenuFlowControllerBase, 2098104164);
	template<> ABP_200508_API UClass* StaticClass<AELMatchResultMenuFlowControllerBase>()
	{
		return AELMatchResultMenuFlowControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMatchResultMenuFlowControllerBase(Z_Construct_UClass_AELMatchResultMenuFlowControllerBase, &AELMatchResultMenuFlowControllerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELMatchResultMenuFlowControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMatchResultMenuFlowControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
