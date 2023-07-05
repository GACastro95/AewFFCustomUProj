// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponTrapObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponTrapObject() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponTrapObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponTrapObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponTrapMode();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponTrapObjectType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWeaponUserDesignComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execAddDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddDurability(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execCanPut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execChangeMode)
	{
		P_GET_ENUM(ESSWeaponTrapMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMode(ESSWeaponTrapMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execChangeMode_Guide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMode_Guide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execChangeMode_Trap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMode_Trap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execGetIsAfterPut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAfterPut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execGetIsBroken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsBroken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execGetMaxDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execGetObjectOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=P_THIS->GetObjectOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execGetObjectType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSWeaponTrapObjectType*)Z_Param__Result=P_THIS->GetObjectType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execGetRemainDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemainDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execOnRep_Mode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execOnRep_ObjectOwner)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_lastOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ObjectOwner(Z_Param_lastOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execPlayHitEffect)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLoc);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_ENUM(ESSDamageReason,Z_Param_DamageReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHitEffect(Z_Param_Out_StartLoc,Z_Param_DamageCauser,ESSDamageReason(Z_Param_DamageReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execPut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Put();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execReserveDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReserveDestroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execSetExternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execSetGuideVisual)
	{
		P_GET_UBOOL(Z_Param_NewCanPut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGuideVisual_Implementation(Z_Param_NewCanPut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execSetInternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execSetObjectOwner)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_NewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectOwner(Z_Param_NewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execSetRemainDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Durability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainDurability(Z_Param_Durability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execSetup)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_NewObjectOwner);
		P_GET_ENUM(ESSWeaponTrapMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_NewObjectOwner,ESSWeaponTrapMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject::execUpdateGuideVisual)
	{
		P_GET_UBOOL(Z_Param_NewCanPut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGuideVisual(Z_Param_NewCanPut);
		P_NATIVE_END;
	}
	static FName NAME_AELSSWeaponTrapObject_SetGuideVisual = FName(TEXT("SetGuideVisual"));
	void AELSSWeaponTrapObject::SetGuideVisual(bool NewCanPut)
	{
		ELSSWeaponTrapObject_eventSetGuideVisual_Parms Parms;
		Parms.NewCanPut=NewCanPut ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSWeaponTrapObject_SetGuideVisual),&Parms);
	}
	void AELSSWeaponTrapObject::StaticRegisterNativesAELSSWeaponTrapObject()
	{
		UClass* Class = AELSSWeaponTrapObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDurability", &AELSSWeaponTrapObject::execAddDurability },
			{ "CanPut", &AELSSWeaponTrapObject::execCanPut },
			{ "ChangeMode", &AELSSWeaponTrapObject::execChangeMode },
			{ "ChangeMode_Guide", &AELSSWeaponTrapObject::execChangeMode_Guide },
			{ "ChangeMode_Trap", &AELSSWeaponTrapObject::execChangeMode_Trap },
			{ "GetIsAfterPut", &AELSSWeaponTrapObject::execGetIsAfterPut },
			{ "GetIsBroken", &AELSSWeaponTrapObject::execGetIsBroken },
			{ "GetMaxDurability", &AELSSWeaponTrapObject::execGetMaxDurability },
			{ "GetObjectOwner", &AELSSWeaponTrapObject::execGetObjectOwner },
			{ "GetObjectType", &AELSSWeaponTrapObject::execGetObjectType },
			{ "GetRemainDurability", &AELSSWeaponTrapObject::execGetRemainDurability },
			{ "OnRep_Mode", &AELSSWeaponTrapObject::execOnRep_Mode },
			{ "OnRep_ObjectOwner", &AELSSWeaponTrapObject::execOnRep_ObjectOwner },
			{ "PlayHitEffect", &AELSSWeaponTrapObject::execPlayHitEffect },
			{ "Put", &AELSSWeaponTrapObject::execPut },
			{ "ReserveDestroy", &AELSSWeaponTrapObject::execReserveDestroy },
			{ "SetExternalVisible", &AELSSWeaponTrapObject::execSetExternalVisible },
			{ "SetGuideVisual", &AELSSWeaponTrapObject::execSetGuideVisual },
			{ "SetInternalVisible", &AELSSWeaponTrapObject::execSetInternalVisible },
			{ "SetObjectOwner", &AELSSWeaponTrapObject::execSetObjectOwner },
			{ "SetRemainDurability", &AELSSWeaponTrapObject::execSetRemainDurability },
			{ "Setup", &AELSSWeaponTrapObject::execSetup },
			{ "UpdateGuideVisual", &AELSSWeaponTrapObject::execUpdateGuideVisual },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics
	{
		struct ELSSWeaponTrapObject_eventAddDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventAddDurability_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventAddDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "AddDurability", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventAddDurability_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics
	{
		struct ELSSWeaponTrapObject_eventCanPut_Parms
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
	void Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWeaponTrapObject_eventCanPut_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponTrapObject_eventCanPut_Parms), &Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "CanPut", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventCanPut_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics
	{
		struct ELSSWeaponTrapObject_eventChangeMode_Parms
		{
			ESSWeaponTrapMode Mode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventChangeMode_Parms, Mode), Z_Construct_UEnum_ABP_200508_ESSWeaponTrapMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "ChangeMode", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventChangeMode_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Guide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Guide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Guide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "ChangeMode_Guide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Guide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Guide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Guide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Guide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Trap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Trap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Trap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "ChangeMode_Trap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Trap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Trap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Trap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Trap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics
	{
		struct ELSSWeaponTrapObject_eventGetIsAfterPut_Parms
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
	void Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWeaponTrapObject_eventGetIsAfterPut_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponTrapObject_eventGetIsAfterPut_Parms), &Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "GetIsAfterPut", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventGetIsAfterPut_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics
	{
		struct ELSSWeaponTrapObject_eventGetIsBroken_Parms
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
	void Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWeaponTrapObject_eventGetIsBroken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponTrapObject_eventGetIsBroken_Parms), &Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "GetIsBroken", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventGetIsBroken_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics
	{
		struct ELSSWeaponTrapObject_eventGetMaxDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventGetMaxDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "GetMaxDurability", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventGetMaxDurability_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics
	{
		struct ELSSWeaponTrapObject_eventGetObjectOwner_Parms
		{
			AELSSPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventGetObjectOwner_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "GetObjectOwner", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventGetObjectOwner_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics
	{
		struct ELSSWeaponTrapObject_eventGetObjectType_Parms
		{
			ESSWeaponTrapObjectType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventGetObjectType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSWeaponTrapObjectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "GetObjectType", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventGetObjectType_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics
	{
		struct ELSSWeaponTrapObject_eventGetRemainDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventGetRemainDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "GetRemainDurability", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventGetRemainDurability_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_Mode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_Mode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_Mode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "OnRep_Mode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_Mode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_Mode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_Mode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_Mode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics
	{
		struct ELSSWeaponTrapObject_eventOnRep_ObjectOwner_Parms
		{
			AELSSPlayer* lastOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lastOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics::NewProp_lastOwner = { "lastOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventOnRep_ObjectOwner_Parms, lastOwner), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics::NewProp_lastOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "OnRep_ObjectOwner", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventOnRep_ObjectOwner_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics
	{
		struct ELSSWeaponTrapObject_eventPlayHitEffect_Parms
		{
			FVector StartLoc;
			AActor* DamageCauser;
			ESSDamageReason DamageReason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLoc;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_StartLoc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_StartLoc = { "StartLoc", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventPlayHitEffect_Parms, StartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_StartLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_StartLoc_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventPlayHitEffect_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_DamageReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_DamageReason = { "DamageReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventPlayHitEffect_Parms, DamageReason), Z_Construct_UEnum_ABP_200508_ESSDamageReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_StartLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_DamageReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::NewProp_DamageReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "PlayHitEffect", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventPlayHitEffect_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_Put_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_Put_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_Put_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "Put", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_Put_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_Put_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_Put()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_Put_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics
	{
		struct ELSSWeaponTrapObject_eventReserveDestroy_Parms
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
	void Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWeaponTrapObject_eventReserveDestroy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponTrapObject_eventReserveDestroy_Parms), &Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "ReserveDestroy", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventReserveDestroy_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics
	{
		struct ELSSWeaponTrapObject_eventSetExternalVisible_Parms
		{
			bool flg;
		};
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSWeaponTrapObject_eventSetExternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponTrapObject_eventSetExternalVisible_Parms), &Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "SetExternalVisible", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventSetExternalVisible_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics
	{
		static void NewProp_NewCanPut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewCanPut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::NewProp_NewCanPut_SetBit(void* Obj)
	{
		((ELSSWeaponTrapObject_eventSetGuideVisual_Parms*)Obj)->NewCanPut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::NewProp_NewCanPut = { "NewCanPut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponTrapObject_eventSetGuideVisual_Parms), &Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::NewProp_NewCanPut_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::NewProp_NewCanPut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "SetGuideVisual", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventSetGuideVisual_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics
	{
		struct ELSSWeaponTrapObject_eventSetInternalVisible_Parms
		{
			bool flg;
		};
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSWeaponTrapObject_eventSetInternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponTrapObject_eventSetInternalVisible_Parms), &Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "SetInternalVisible", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventSetInternalVisible_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics
	{
		struct ELSSWeaponTrapObject_eventSetObjectOwner_Parms
		{
			AELSSPlayer* NewOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventSetObjectOwner_Parms, NewOwner), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics::NewProp_NewOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "SetObjectOwner", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventSetObjectOwner_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics
	{
		struct ELSSWeaponTrapObject_eventSetRemainDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventSetRemainDurability_Parms, Durability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics::NewProp_Durability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "SetRemainDurability", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventSetRemainDurability_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics
	{
		struct ELSSWeaponTrapObject_eventSetup_Parms
		{
			AELSSPlayer* NewObjectOwner;
			ESSWeaponTrapMode Mode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewObjectOwner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::NewProp_NewObjectOwner = { "NewObjectOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventSetup_Parms, NewObjectOwner), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_eventSetup_Parms, Mode), Z_Construct_UEnum_ABP_200508_ESSWeaponTrapMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::NewProp_NewObjectOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "Setup", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventSetup_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics
	{
		struct ELSSWeaponTrapObject_eventUpdateGuideVisual_Parms
		{
			bool NewCanPut;
		};
		static void NewProp_NewCanPut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewCanPut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::NewProp_NewCanPut_SetBit(void* Obj)
	{
		((ELSSWeaponTrapObject_eventUpdateGuideVisual_Parms*)Obj)->NewCanPut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::NewProp_NewCanPut = { "NewCanPut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponTrapObject_eventUpdateGuideVisual_Parms), &Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::NewProp_NewCanPut_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::NewProp_NewCanPut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject, nullptr, "UpdateGuideVisual", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_eventUpdateGuideVisual_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponTrapObject_NoRegister()
	{
		return AELSSWeaponTrapObject::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponTrapObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDesignComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserDesignComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckPutTriggerCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckPutTriggerCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuideMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuideMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectOwner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModeRep_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModeRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCanPutGuideVisiual_MetaData[];
#endif
		static void NewProp_IsCanPutGuideVisiual_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCanPutGuideVisiual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckPutTriggerProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CheckPutTriggerProfileName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TempActorsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TempActorsToIgnore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Put_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Put;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectLineTraceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitEffectLineTraceScale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitEffectLineTraceObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectLineTraceObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitEffectLineTraceObjectTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReserveDestroy_MetaData[];
#endif
		static void NewProp_IsReserveDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReserveDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainDurability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainDurability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDurability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponTrapObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponTrapObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_AddDurability, "AddDurability" }, // 2689998439
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_CanPut, "CanPut" }, // 3908710494
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode, "ChangeMode" }, // 474285912
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Guide, "ChangeMode_Guide" }, // 37622411
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_ChangeMode_Trap, "ChangeMode_Trap" }, // 4088978170
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsAfterPut, "GetIsAfterPut" }, // 3249797565
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_GetIsBroken, "GetIsBroken" }, // 3311931972
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_GetMaxDurability, "GetMaxDurability" }, // 2021669003
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectOwner, "GetObjectOwner" }, // 709493926
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_GetObjectType, "GetObjectType" }, // 1872126878
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_GetRemainDurability, "GetRemainDurability" }, // 3002829582
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_Mode, "OnRep_Mode" }, // 4046672446
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_OnRep_ObjectOwner, "OnRep_ObjectOwner" }, // 3706152413
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_PlayHitEffect, "PlayHitEffect" }, // 847232800
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_Put, "Put" }, // 3768961513
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_ReserveDestroy, "ReserveDestroy" }, // 3945065281
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_SetExternalVisible, "SetExternalVisible" }, // 4256306166
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_SetGuideVisual, "SetGuideVisual" }, // 185637835
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_SetInternalVisible, "SetInternalVisible" }, // 3018521232
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_SetObjectOwner, "SetObjectOwner" }, // 3909968854
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_SetRemainDurability, "SetRemainDurability" }, // 3976002604
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_Setup, "Setup" }, // 1352069674
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_UpdateGuideVisual, "UpdateGuideVisual" }, // 1374344278
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponTrapObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_UserDesignComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_UserDesignComponent = { "UserDesignComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, UserDesignComponent), Z_Construct_UClass_UELSSWeaponUserDesignComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_UserDesignComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_UserDesignComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_CheckPutTriggerCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_CheckPutTriggerCollision = { "CheckPutTriggerCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, CheckPutTriggerCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_CheckPutTriggerCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_CheckPutTriggerCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_GuideMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_GuideMesh = { "GuideMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, GuideMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_GuideMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_GuideMesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ObjectType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, ObjectType), Z_Construct_UEnum_ABP_200508_ESSWeaponTrapObjectType, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ObjectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_objectOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_objectOwner = { "objectOwner", "OnRep_ObjectOwner", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, objectOwner), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_objectOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_objectOwner_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ModeRep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ModeRep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ModeRep = { "ModeRep", "OnRep_Mode", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, ModeRep), Z_Construct_UEnum_ABP_200508_ESSWeaponTrapMode, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ModeRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ModeRep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsCanPutGuideVisiual_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	void Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsCanPutGuideVisiual_SetBit(void* Obj)
	{
		((AELSSWeaponTrapObject*)Obj)->IsCanPutGuideVisiual = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsCanPutGuideVisiual = { "IsCanPutGuideVisiual", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSWeaponTrapObject), &Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsCanPutGuideVisiual_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsCanPutGuideVisiual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsCanPutGuideVisiual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_CheckPutTriggerProfileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_CheckPutTriggerProfileName = { "CheckPutTriggerProfileName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, CheckPutTriggerProfileName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_CheckPutTriggerProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_CheckPutTriggerProfileName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_TempActorsToIgnore_Inner = { "TempActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_TempActorsToIgnore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_TempActorsToIgnore = { "TempActorsToIgnore", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, TempActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_TempActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_TempActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SoundCue_Put_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SoundCue_Put = { "SoundCue_Put", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, SoundCue_Put), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SoundCue_Put_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SoundCue_Put_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceScale = { "HitEffectLineTraceScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, HitEffectLineTraceScale), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceScale_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceObjectTypes = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, HitEffectLineTraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SoundCue_Hit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SoundCue_Hit = { "SoundCue_Hit", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, SoundCue_Hit), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SoundCue_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SoundCue_Hit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsReserveDestroy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	void Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsReserveDestroy_SetBit(void* Obj)
	{
		((AELSSWeaponTrapObject*)Obj)->IsReserveDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsReserveDestroy = { "IsReserveDestroy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSWeaponTrapObject), &Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsReserveDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsReserveDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsReserveDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_RemainDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_RemainDurability = { "RemainDurability", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, RemainDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_RemainDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_RemainDurability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_MaxDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_MaxDurability = { "MaxDurability", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject, MaxDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_MaxDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_MaxDurability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponTrapObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_UserDesignComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_CheckPutTriggerCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_GuideMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ObjectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_objectOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ModeRep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_ModeRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsCanPutGuideVisiual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_CheckPutTriggerProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_TempActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_TempActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SoundCue_Put,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_HitEffectLineTraceObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_SoundCue_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_IsReserveDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_RemainDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Statics::NewProp_MaxDurability,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSWeaponTrapObject, IELSSActorCommonInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponTrapObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponTrapObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponTrapObject_Statics::ClassParams = {
		&AELSSWeaponTrapObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponTrapObject_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponTrapObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponTrapObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponTrapObject, 709135812);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponTrapObject>()
	{
		return AELSSWeaponTrapObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponTrapObject(Z_Construct_UClass_AELSSWeaponTrapObject, &AELSSWeaponTrapObject::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponTrapObject"), false, nullptr, nullptr, nullptr);

	void AELSSWeaponTrapObject::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_objectOwner(TEXT("objectOwner"));
		static const FName Name_ModeRep(TEXT("ModeRep"));

		const bool bIsValid = true
			&& Name_objectOwner == ClassReps[(int32)ENetFields_Private::objectOwner].Property->GetFName()
			&& Name_ModeRep == ClassReps[(int32)ENetFields_Private::ModeRep].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSWeaponTrapObject"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponTrapObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
