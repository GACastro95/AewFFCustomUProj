// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPlayerEffectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlayerEffectBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerEffectBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerEffectBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELPlayerEffectBase::execGetGuardBreakEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetGuardBreakEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerEffectBase::execGetNoDownEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetNoDownEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerEffectBase::execGetPassiveSkillEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetPassiveSkillEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerEffectBase::execGetReversalEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetReversalEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerEffectBase::execSetup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_ControllerId);
		P_NATIVE_END;
	}
	static FName NAME_UELPlayerEffectBase_PassiveSkillEvent_BP = FName(TEXT("PassiveSkillEvent_BP"));
	void UELPlayerEffectBase::PassiveSkillEvent_BP(FStPassiveSkillData const& PassiveSkillData)
	{
		ELPlayerEffectBase_eventPassiveSkillEvent_BP_Parms Parms;
		Parms.PassiveSkillData=PassiveSkillData;
		ProcessEvent(FindFunctionChecked(NAME_UELPlayerEffectBase_PassiveSkillEvent_BP),&Parms);
	}
	void UELPlayerEffectBase::StaticRegisterNativesUELPlayerEffectBase()
	{
		UClass* Class = UELPlayerEffectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGuardBreakEffect", &UELPlayerEffectBase::execGetGuardBreakEffect },
			{ "GetNoDownEffect", &UELPlayerEffectBase::execGetNoDownEffect },
			{ "GetPassiveSkillEffect", &UELPlayerEffectBase::execGetPassiveSkillEffect },
			{ "GetReversalEffect", &UELPlayerEffectBase::execGetReversalEffect },
			{ "Setup", &UELPlayerEffectBase::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics
	{
		struct ELPlayerEffectBase_eventGetGuardBreakEffect_Parms
		{
			UParticleSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerEffectBase_eventGetGuardBreakEffect_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerEffectBase, nullptr, "GetGuardBreakEffect", nullptr, nullptr, sizeof(ELPlayerEffectBase_eventGetGuardBreakEffect_Parms), Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics
	{
		struct ELPlayerEffectBase_eventGetNoDownEffect_Parms
		{
			UParticleSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerEffectBase_eventGetNoDownEffect_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerEffectBase, nullptr, "GetNoDownEffect", nullptr, nullptr, sizeof(ELPlayerEffectBase_eventGetNoDownEffect_Parms), Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics
	{
		struct ELPlayerEffectBase_eventGetPassiveSkillEffect_Parms
		{
			UParticleSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerEffectBase_eventGetPassiveSkillEffect_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerEffectBase, nullptr, "GetPassiveSkillEffect", nullptr, nullptr, sizeof(ELPlayerEffectBase_eventGetPassiveSkillEffect_Parms), Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics
	{
		struct ELPlayerEffectBase_eventGetReversalEffect_Parms
		{
			UParticleSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerEffectBase_eventGetReversalEffect_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerEffectBase, nullptr, "GetReversalEffect", nullptr, nullptr, sizeof(ELPlayerEffectBase_eventGetReversalEffect_Parms), Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSkillData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSkillData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::NewProp_PassiveSkillData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::NewProp_PassiveSkillData = { "PassiveSkillData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerEffectBase_eventPassiveSkillEvent_BP_Parms, PassiveSkillData), Z_Construct_UScriptStruct_FStPassiveSkillData, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::NewProp_PassiveSkillData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::NewProp_PassiveSkillData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::NewProp_PassiveSkillData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerEffectBase, nullptr, "PassiveSkillEvent_BP", nullptr, nullptr, sizeof(ELPlayerEffectBase_eventPassiveSkillEvent_BP_Parms), Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics
	{
		struct ELPlayerEffectBase_eventSetup_Parms
		{
			int32 ControllerId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerEffectBase_eventSetup_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics::NewProp_ControllerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerEffectBase, nullptr, "Setup", nullptr, nullptr, sizeof(ELPlayerEffectBase_eventSetup_Parms), Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerEffectBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerEffectBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPlayerEffectBase_NoRegister()
	{
		return UELPlayerEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_UELPlayerEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPlayerEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPlayerEffectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPlayerEffectBase_GetGuardBreakEffect, "GetGuardBreakEffect" }, // 3794530292
		{ &Z_Construct_UFunction_UELPlayerEffectBase_GetNoDownEffect, "GetNoDownEffect" }, // 3830681689
		{ &Z_Construct_UFunction_UELPlayerEffectBase_GetPassiveSkillEffect, "GetPassiveSkillEffect" }, // 2339175374
		{ &Z_Construct_UFunction_UELPlayerEffectBase_GetReversalEffect, "GetReversalEffect" }, // 2069793390
		{ &Z_Construct_UFunction_UELPlayerEffectBase_PassiveSkillEvent_BP, "PassiveSkillEvent_BP" }, // 2127355250
		{ &Z_Construct_UFunction_UELPlayerEffectBase_Setup, "Setup" }, // 2950632041
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerEffectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELPlayerEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerEffectBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerEffectBase_Statics::NewProp_EffectDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerEffectBase" },
		{ "ModuleRelativePath", "Public/ELPlayerEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELPlayerEffectBase_Statics::NewProp_EffectDataTable = { "EffectDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerEffectBase, EffectDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELPlayerEffectBase_Statics::NewProp_EffectDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerEffectBase_Statics::NewProp_EffectDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELPlayerEffectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerEffectBase_Statics::NewProp_EffectDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPlayerEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPlayerEffectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPlayerEffectBase_Statics::ClassParams = {
		&UELPlayerEffectBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELPlayerEffectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerEffectBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UELPlayerEffectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerEffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPlayerEffectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPlayerEffectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPlayerEffectBase, 2021350272);
	template<> ABP_200508_API UClass* StaticClass<UELPlayerEffectBase>()
	{
		return UELPlayerEffectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPlayerEffectBase(Z_Construct_UClass_UELPlayerEffectBase, &UELPlayerEffectBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPlayerEffectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPlayerEffectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
