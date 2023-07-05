// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSShieldBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSShieldBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSShieldBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSShieldBase();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPickupBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSShieldParam();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSShieldBase::execAddDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddDurability(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSShieldBase::execAddDurabilityByRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddDurabilityByRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSShieldBase::execGetRemainDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemainDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSShieldBase::execGetRemainDurabilityRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainDurabilityRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSShieldBase::execOnEndPerformAbsorbMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndPerformAbsorbMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSShieldBase::execOnRep_AbsorbMoveTo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AbsorbMoveTo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSShieldBase::execOnRep_RemainDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RemainDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSShieldBase::execPerformAbsorbMovement)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformAbsorbMovement(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSShieldBase::execSetRemainDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Durability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainDurability(Z_Param_Durability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSShieldBase::execSetup)
	{
		P_GET_STRUCT_REF(FSSShieldParam,Z_Param_Out_shieldParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup_Implementation(Z_Param_Out_shieldParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSShieldBase::execStartAbsorbMovement)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAbsorbMovement(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	static FName NAME_AELSSShieldBase_Setup = FName(TEXT("Setup"));
	void AELSSShieldBase::Setup(FSSShieldParam const& shieldParam)
	{
		ELSSShieldBase_eventSetup_Parms Parms;
		Parms.shieldParam=shieldParam;
		ProcessEvent(FindFunctionChecked(NAME_AELSSShieldBase_Setup),&Parms);
	}
	void AELSSShieldBase::StaticRegisterNativesAELSSShieldBase()
	{
		UClass* Class = AELSSShieldBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDurability", &AELSSShieldBase::execAddDurability },
			{ "AddDurabilityByRate", &AELSSShieldBase::execAddDurabilityByRate },
			{ "GetRemainDurability", &AELSSShieldBase::execGetRemainDurability },
			{ "GetRemainDurabilityRatio", &AELSSShieldBase::execGetRemainDurabilityRatio },
			{ "OnEndPerformAbsorbMovement", &AELSSShieldBase::execOnEndPerformAbsorbMovement },
			{ "OnRep_AbsorbMoveTo", &AELSSShieldBase::execOnRep_AbsorbMoveTo },
			{ "OnRep_RemainDurability", &AELSSShieldBase::execOnRep_RemainDurability },
			{ "PerformAbsorbMovement", &AELSSShieldBase::execPerformAbsorbMovement },
			{ "SetRemainDurability", &AELSSShieldBase::execSetRemainDurability },
			{ "Setup", &AELSSShieldBase::execSetup },
			{ "StartAbsorbMovement", &AELSSShieldBase::execStartAbsorbMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics
	{
		struct ELSSShieldBase_eventAddDurability_Parms
		{
			int32 Value;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSShieldBase_eventAddDurability_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSShieldBase_eventAddDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "AddDurability", nullptr, nullptr, sizeof(ELSSShieldBase_eventAddDurability_Parms), Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_AddDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_AddDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics
	{
		struct ELSSShieldBase_eventAddDurabilityByRate_Parms
		{
			float Rate;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSShieldBase_eventAddDurabilityByRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSShieldBase_eventAddDurabilityByRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "AddDurabilityByRate", nullptr, nullptr, sizeof(ELSSShieldBase_eventAddDurabilityByRate_Parms), Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics
	{
		struct ELSSShieldBase_eventGetRemainDurability_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSShieldBase_eventGetRemainDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "GetRemainDurability", nullptr, nullptr, sizeof(ELSSShieldBase_eventGetRemainDurability_Parms), Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics
	{
		struct ELSSShieldBase_eventGetRemainDurabilityRatio_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSShieldBase_eventGetRemainDurabilityRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "GetRemainDurabilityRatio", nullptr, nullptr, sizeof(ELSSShieldBase_eventGetRemainDurabilityRatio_Parms), Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSShieldBase_OnEndPerformAbsorbMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_OnEndPerformAbsorbMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_OnEndPerformAbsorbMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "OnEndPerformAbsorbMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_OnEndPerformAbsorbMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_OnEndPerformAbsorbMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_OnEndPerformAbsorbMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_OnEndPerformAbsorbMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSShieldBase_OnRep_AbsorbMoveTo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_OnRep_AbsorbMoveTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_OnRep_AbsorbMoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "OnRep_AbsorbMoveTo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_OnRep_AbsorbMoveTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_OnRep_AbsorbMoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_OnRep_AbsorbMoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_OnRep_AbsorbMoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSShieldBase_OnRep_RemainDurability_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_OnRep_RemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_OnRep_RemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "OnRep_RemainDurability", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_OnRep_RemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_OnRep_RemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_OnRep_RemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_OnRep_RemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics
	{
		struct ELSSShieldBase_eventPerformAbsorbMovement_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSShieldBase_eventPerformAbsorbMovement_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "PerformAbsorbMovement", nullptr, nullptr, sizeof(ELSSShieldBase_eventPerformAbsorbMovement_Parms), Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics
	{
		struct ELSSShieldBase_eventSetRemainDurability_Parms
		{
			int32 Durability;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Durability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSShieldBase_eventSetRemainDurability_Parms, Durability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics::NewProp_Durability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "SetRemainDurability", nullptr, nullptr, sizeof(ELSSShieldBase_eventSetRemainDurability_Parms), Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSShieldBase_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shieldParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shieldParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::NewProp_shieldParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::NewProp_shieldParam = { "shieldParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSShieldBase_eventSetup_Parms, shieldParam), Z_Construct_UScriptStruct_FSSShieldParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::NewProp_shieldParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::NewProp_shieldParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::NewProp_shieldParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "Setup", nullptr, nullptr, sizeof(ELSSShieldBase_eventSetup_Parms), Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics
	{
		struct ELSSShieldBase_eventStartAbsorbMovement_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSShieldBase_eventStartAbsorbMovement_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSShieldBase, nullptr, "StartAbsorbMovement", nullptr, nullptr, sizeof(ELSSShieldBase_eventStartAbsorbMovement_Parms), Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSShieldBase_NoRegister()
	{
		return AELSSShieldBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSShieldBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDurability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDurability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainDurability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainDurability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnableAbsorbMovement_MetaData[];
#endif
		static void NewProp_IsEnableAbsorbMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnableAbsorbMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPerformAbsorbMovement_MetaData[];
#endif
		static void NewProp_IsPerformAbsorbMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPerformAbsorbMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbMovementDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorbMovementDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbMovementDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorbMovementDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbMovementTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorbMovementTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PickupStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OriginalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbMovementEndScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorbMovementEndScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbMoveTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbsorbMoveTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSShieldBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSPickupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSShieldBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSShieldBase_AddDurability, "AddDurability" }, // 2579727137
		{ &Z_Construct_UFunction_AELSSShieldBase_AddDurabilityByRate, "AddDurabilityByRate" }, // 3208798621
		{ &Z_Construct_UFunction_AELSSShieldBase_GetRemainDurability, "GetRemainDurability" }, // 3268033722
		{ &Z_Construct_UFunction_AELSSShieldBase_GetRemainDurabilityRatio, "GetRemainDurabilityRatio" }, // 2041327591
		{ &Z_Construct_UFunction_AELSSShieldBase_OnEndPerformAbsorbMovement, "OnEndPerformAbsorbMovement" }, // 615725269
		{ &Z_Construct_UFunction_AELSSShieldBase_OnRep_AbsorbMoveTo, "OnRep_AbsorbMoveTo" }, // 3441133516
		{ &Z_Construct_UFunction_AELSSShieldBase_OnRep_RemainDurability, "OnRep_RemainDurability" }, // 2603698733
		{ &Z_Construct_UFunction_AELSSShieldBase_PerformAbsorbMovement, "PerformAbsorbMovement" }, // 189577018
		{ &Z_Construct_UFunction_AELSSShieldBase_SetRemainDurability, "SetRemainDurability" }, // 1368908839
		{ &Z_Construct_UFunction_AELSSShieldBase_Setup, "Setup" }, // 3167537753
		{ &Z_Construct_UFunction_AELSSShieldBase_StartAbsorbMovement, "StartAbsorbMovement" }, // 3887531584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSShieldBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSShieldBase, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_MaxDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_MaxDurability = { "MaxDurability", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSShieldBase, MaxDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_MaxDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_MaxDurability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_RemainDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_RemainDurability = { "RemainDurability", "OnRep_RemainDurability", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSShieldBase, RemainDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_RemainDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_RemainDurability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsEnableAbsorbMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsEnableAbsorbMovement_SetBit(void* Obj)
	{
		((AELSSShieldBase*)Obj)->IsEnableAbsorbMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsEnableAbsorbMovement = { "IsEnableAbsorbMovement", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSShieldBase), &Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsEnableAbsorbMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsEnableAbsorbMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsEnableAbsorbMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsPerformAbsorbMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsPerformAbsorbMovement_SetBit(void* Obj)
	{
		((AELSSShieldBase*)Obj)->IsPerformAbsorbMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsPerformAbsorbMovement = { "IsPerformAbsorbMovement", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSShieldBase), &Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsPerformAbsorbMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsPerformAbsorbMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsPerformAbsorbMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementDelay = { "AbsorbMovementDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSShieldBase, AbsorbMovementDelay), METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementDuration = { "AbsorbMovementDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSShieldBase, AbsorbMovementDuration), METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementTimer = { "AbsorbMovementTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSShieldBase, AbsorbMovementTimer), METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_PickupStartLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_PickupStartLocation = { "PickupStartLocation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSShieldBase, PickupStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_PickupStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_PickupStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_OriginalScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_OriginalScale = { "OriginalScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSShieldBase, OriginalScale), METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_OriginalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_OriginalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementEndScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementEndScale = { "AbsorbMovementEndScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSShieldBase, AbsorbMovementEndScale), METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementEndScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementEndScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMoveTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSShieldBase" },
		{ "ModuleRelativePath", "Public/ELSSShieldBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMoveTo = { "AbsorbMoveTo", "OnRep_AbsorbMoveTo", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSShieldBase, AbsorbMoveTo), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMoveTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMoveTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSShieldBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_MaxDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_RemainDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsEnableAbsorbMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_IsPerformAbsorbMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_PickupStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_OriginalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMovementEndScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSShieldBase_Statics::NewProp_AbsorbMoveTo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSShieldBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSShieldBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSShieldBase_Statics::ClassParams = {
		&AELSSShieldBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSShieldBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSShieldBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSShieldBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSShieldBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSShieldBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSShieldBase, 2489754653);
	template<> ABP_200508_API UClass* StaticClass<AELSSShieldBase>()
	{
		return AELSSShieldBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSShieldBase(Z_Construct_UClass_AELSSShieldBase, &AELSSShieldBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSShieldBase"), false, nullptr, nullptr, nullptr);

	void AELSSShieldBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RemainDurability(TEXT("RemainDurability"));
		static const FName Name_AbsorbMoveTo(TEXT("AbsorbMoveTo"));

		const bool bIsValid = true
			&& Name_RemainDurability == ClassReps[(int32)ENetFields_Private::RemainDurability].Property->GetFName()
			&& Name_AbsorbMoveTo == ClassReps[(int32)ENetFields_Private::AbsorbMoveTo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSShieldBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSShieldBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
