// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerOtherMenuManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerOtherMenuManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerOtherMenuManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerOtherMenuManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerOtherMenuState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerOtherMenuExit();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerOtherMenuManager::execCheckState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckState(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerOtherMenuManager::execSetState)
	{
		P_GET_ENUM(ECareerOtherMenuState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(ECareerOtherMenuState(Z_Param_State));
		P_NATIVE_END;
	}
	static FName NAME_AELCareerOtherMenuManager_TransitionLevel = FName(TEXT("TransitionLevel"));
	void AELCareerOtherMenuManager::TransitionLevel(ECareerOtherMenuExit eOtherMenuExit)
	{
		ELCareerOtherMenuManager_eventTransitionLevel_Parms Parms;
		Parms.eOtherMenuExit=eOtherMenuExit;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerOtherMenuManager_TransitionLevel),&Parms);
	}
	void AELCareerOtherMenuManager::StaticRegisterNativesAELCareerOtherMenuManager()
	{
		UClass* Class = AELCareerOtherMenuManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckState", &AELCareerOtherMenuManager::execCheckState },
			{ "SetState", &AELCareerOtherMenuManager::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics
	{
		struct ELCareerOtherMenuManager_eventCheckState_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerOtherMenuManager_eventCheckState_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerOtherMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerOtherMenuManager, nullptr, "CheckState", nullptr, nullptr, sizeof(ELCareerOtherMenuManager_eventCheckState_Parms), Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics
	{
		struct ELCareerOtherMenuManager_eventSetState_Parms
		{
			ECareerOtherMenuState State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerOtherMenuManager_eventSetState_Parms, State), Z_Construct_UEnum_ABP_200508_ECareerOtherMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerOtherMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerOtherMenuManager, nullptr, "SetState", nullptr, nullptr, sizeof(ELCareerOtherMenuManager_eventSetState_Parms), Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerOtherMenuManager_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerOtherMenuManager_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOtherMenuExit_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOtherMenuExit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::NewProp_eOtherMenuExit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::NewProp_eOtherMenuExit = { "eOtherMenuExit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerOtherMenuManager_eventTransitionLevel_Parms, eOtherMenuExit), Z_Construct_UEnum_ABP_200508_ECareerOtherMenuExit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::NewProp_eOtherMenuExit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::NewProp_eOtherMenuExit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerOtherMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerOtherMenuManager, nullptr, "TransitionLevel", nullptr, nullptr, sizeof(ELCareerOtherMenuManager_eventTransitionLevel_Parms), Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerOtherMenuManager_NoRegister()
	{
		return AELCareerOtherMenuManager::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerOtherMenuManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerOtherMenuManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerOtherMenuManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerOtherMenuManager_CheckState, "CheckState" }, // 2582699539
		{ &Z_Construct_UFunction_AELCareerOtherMenuManager_SetState, "SetState" }, // 905455172
		{ &Z_Construct_UFunction_AELCareerOtherMenuManager_TransitionLevel, "TransitionLevel" }, // 3620502416
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerOtherMenuManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerOtherMenuManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerOtherMenuManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerOtherMenuManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerOtherMenuManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerOtherMenuManager_Statics::ClassParams = {
		&AELCareerOtherMenuManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AELCareerOtherMenuManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerOtherMenuManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerOtherMenuManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerOtherMenuManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerOtherMenuManager, 3868142164);
	template<> ABP_200508_API UClass* StaticClass<AELCareerOtherMenuManager>()
	{
		return AELCareerOtherMenuManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerOtherMenuManager(Z_Construct_UClass_AELCareerOtherMenuManager, &AELCareerOtherMenuManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerOtherMenuManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerOtherMenuManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
