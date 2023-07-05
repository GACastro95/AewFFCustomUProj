// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAttackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAttackerComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAttackerComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAttackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackCollisionParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDamageEvent();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSInvolveInfo();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackInfo();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackOverlap();
// End Cross Module References
	DEFINE_FUNCTION(UELSSAttackerComponent::execActivateAttack)
	{
		P_GET_STRUCT_REF(FSSAttackCollisionParam,Z_Param_Out_inCollisionParam);
		P_GET_STRUCT_REF(FSSAttackCollisionShapeBlend,Z_Param_Out_inShapeBlend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateAttack(Z_Param_Out_inCollisionParam,Z_Param_Out_inShapeBlend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execCheckDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_inOtherActor);
		P_GET_STRUCT_REF(FSSDamageEvent,Z_Param_Out_inDamageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckDamage(Z_Param_inOtherActor,Z_Param_Out_inDamageEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execClearAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execDeactivateAttack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_attackId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateAttack(Z_Param_attackId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execForceUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execForceUpdateInvolveCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceUpdateInvolveCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execGetInvolveInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSInvolveInfo*)Z_Param__Result=P_THIS->GetInvolveInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execIsEnableInvolve)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableInvolve();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execOnBeginOverlapAttack)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapAttack(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execOnBeginOverlapInvolve)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapInvolve(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execOnBeginOverlapTramp)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapTramp(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execOnEndOverlapAttack)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapAttack(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execOnEndOverlapInvolve)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapInvolve(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execOnEndOverlapTramp)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapTramp(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execPerformInvolve)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformInvolve();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execPerformInvolvePlayerOnly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformInvolvePlayerOnly();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execPerformInvolvePropOnly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformInvolvePropOnly();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execSetCollisionOffset)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionOffset(Z_Param_Out_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execSetParentComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_parentComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentComponent(Z_Param_parentComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execSetupInvolve)
	{
		P_GET_OBJECT(AActor,Z_Param_AttackUser);
		P_GET_OBJECT(AActor,Z_Param_AttackOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInvolve(Z_Param_AttackUser,Z_Param_AttackOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execTryAttack)
	{
		P_GET_OBJECT(AActor,Z_Param_inReceiveActor);
		P_GET_STRUCT_REF(FSSAttackInfo,Z_Param_Out_inAttackInfo);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_inAtkCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryAttack(Z_Param_inReceiveActor,Z_Param_Out_inAttackInfo,Z_Param_inAtkCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execTryInvolve)
	{
		P_GET_OBJECT(AActor,Z_Param_inReceiveActor);
		P_GET_STRUCT_REF(FSSInvolveInfo,Z_Param_Out_inInvolveInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryInvolve(Z_Param_inReceiveActor,Z_Param_Out_inInvolveInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execUpdateCollisionShape)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCollisionShape();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAttackerComponent::execUpdateInvolveCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInvolveCollision();
		P_NATIVE_END;
	}
	void UELSSAttackerComponent::StaticRegisterNativesUELSSAttackerComponent()
	{
		UClass* Class = UELSSAttackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAttack", &UELSSAttackerComponent::execActivateAttack },
			{ "CheckDamage", &UELSSAttackerComponent::execCheckDamage },
			{ "ClearAttack", &UELSSAttackerComponent::execClearAttack },
			{ "DeactivateAttack", &UELSSAttackerComponent::execDeactivateAttack },
			{ "ForceUpdate", &UELSSAttackerComponent::execForceUpdate },
			{ "ForceUpdateInvolveCollision", &UELSSAttackerComponent::execForceUpdateInvolveCollision },
			{ "GetInvolveInfo", &UELSSAttackerComponent::execGetInvolveInfo },
			{ "IsEnableInvolve", &UELSSAttackerComponent::execIsEnableInvolve },
			{ "OnBeginOverlapAttack", &UELSSAttackerComponent::execOnBeginOverlapAttack },
			{ "OnBeginOverlapInvolve", &UELSSAttackerComponent::execOnBeginOverlapInvolve },
			{ "OnBeginOverlapTramp", &UELSSAttackerComponent::execOnBeginOverlapTramp },
			{ "OnEndOverlapAttack", &UELSSAttackerComponent::execOnEndOverlapAttack },
			{ "OnEndOverlapInvolve", &UELSSAttackerComponent::execOnEndOverlapInvolve },
			{ "OnEndOverlapTramp", &UELSSAttackerComponent::execOnEndOverlapTramp },
			{ "PerformInvolve", &UELSSAttackerComponent::execPerformInvolve },
			{ "PerformInvolvePlayerOnly", &UELSSAttackerComponent::execPerformInvolvePlayerOnly },
			{ "PerformInvolvePropOnly", &UELSSAttackerComponent::execPerformInvolvePropOnly },
			{ "SetCollisionOffset", &UELSSAttackerComponent::execSetCollisionOffset },
			{ "SetParentComponent", &UELSSAttackerComponent::execSetParentComponent },
			{ "SetupInvolve", &UELSSAttackerComponent::execSetupInvolve },
			{ "TryAttack", &UELSSAttackerComponent::execTryAttack },
			{ "TryInvolve", &UELSSAttackerComponent::execTryInvolve },
			{ "UpdateCollisionShape", &UELSSAttackerComponent::execUpdateCollisionShape },
			{ "UpdateInvolveCollision", &UELSSAttackerComponent::execUpdateInvolveCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics
	{
		struct ELSSAttackerComponent_eventActivateAttack_Parms
		{
			FSSAttackCollisionParam inCollisionParam;
			FSSAttackCollisionShapeBlend inShapeBlend;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inCollisionParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inCollisionParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inShapeBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inShapeBlend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::NewProp_inCollisionParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::NewProp_inCollisionParam = { "inCollisionParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventActivateAttack_Parms, inCollisionParam), Z_Construct_UScriptStruct_FSSAttackCollisionParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::NewProp_inCollisionParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::NewProp_inCollisionParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::NewProp_inShapeBlend_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::NewProp_inShapeBlend = { "inShapeBlend", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventActivateAttack_Parms, inShapeBlend), Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::NewProp_inShapeBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::NewProp_inShapeBlend_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::NewProp_inCollisionParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::NewProp_inShapeBlend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "ActivateAttack", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventActivateAttack_Parms), Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics
	{
		struct ELSSAttackerComponent_eventCheckDamage_Parms
		{
			AActor* inOtherActor;
			FSSDamageEvent inDamageEvent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inOtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inDamageEvent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_inOtherActor = { "inOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventCheckDamage_Parms, inOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_inDamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_inDamageEvent = { "inDamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventCheckDamage_Parms, inDamageEvent), Z_Construct_UScriptStruct_FSSDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_inDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_inDamageEvent_MetaData)) };
	void Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSAttackerComponent_eventCheckDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAttackerComponent_eventCheckDamage_Parms), &Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_inOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_inDamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "CheckDamage", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventCheckDamage_Parms), Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_ClearAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_ClearAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_ClearAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "ClearAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_ClearAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_ClearAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_ClearAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_ClearAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics
	{
		struct ELSSAttackerComponent_eventDeactivateAttack_Parms
		{
			int32 attackId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attackId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics::NewProp_attackId = { "attackId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventDeactivateAttack_Parms, attackId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics::NewProp_attackId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "DeactivateAttack", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventDeactivateAttack_Parms), Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "ForceUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdateInvolveCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdateInvolveCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdateInvolveCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "ForceUpdateInvolveCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdateInvolveCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdateInvolveCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdateInvolveCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdateInvolveCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics
	{
		struct ELSSAttackerComponent_eventGetInvolveInfo_Parms
		{
			FSSInvolveInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventGetInvolveInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSInvolveInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "GetInvolveInfo", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventGetInvolveInfo_Parms), Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics
	{
		struct ELSSAttackerComponent_eventIsEnableInvolve_Parms
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
	void Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSAttackerComponent_eventIsEnableInvolve_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAttackerComponent_eventIsEnableInvolve_Parms), &Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "IsEnableInvolve", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventIsEnableInvolve_Parms), Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics
	{
		struct ELSSAttackerComponent_eventOnBeginOverlapAttack_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapAttack_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapAttack_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapAttack_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapAttack_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSAttackerComponent_eventOnBeginOverlapAttack_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAttackerComponent_eventOnBeginOverlapAttack_Parms), &Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapAttack_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "OnBeginOverlapAttack", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventOnBeginOverlapAttack_Parms), Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics
	{
		struct ELSSAttackerComponent_eventOnBeginOverlapInvolve_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapInvolve_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapInvolve_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapInvolve_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapInvolve_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSAttackerComponent_eventOnBeginOverlapInvolve_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAttackerComponent_eventOnBeginOverlapInvolve_Parms), &Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapInvolve_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "OnBeginOverlapInvolve", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventOnBeginOverlapInvolve_Parms), Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics
	{
		struct ELSSAttackerComponent_eventOnBeginOverlapTramp_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapTramp_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapTramp_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapTramp_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapTramp_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSAttackerComponent_eventOnBeginOverlapTramp_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAttackerComponent_eventOnBeginOverlapTramp_Parms), &Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnBeginOverlapTramp_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "OnBeginOverlapTramp", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventOnBeginOverlapTramp_Parms), Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics
	{
		struct ELSSAttackerComponent_eventOnEndOverlapAttack_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapAttack_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapAttack_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapAttack_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapAttack_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "OnEndOverlapAttack", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventOnEndOverlapAttack_Parms), Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics
	{
		struct ELSSAttackerComponent_eventOnEndOverlapInvolve_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapInvolve_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapInvolve_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapInvolve_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapInvolve_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "OnEndOverlapInvolve", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventOnEndOverlapInvolve_Parms), Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics
	{
		struct ELSSAttackerComponent_eventOnEndOverlapTramp_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapTramp_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapTramp_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapTramp_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventOnEndOverlapTramp_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "OnEndOverlapTramp", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventOnEndOverlapTramp_Parms), Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "PerformInvolve", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePlayerOnly_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePlayerOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePlayerOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "PerformInvolvePlayerOnly", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePlayerOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePlayerOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePlayerOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePlayerOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePropOnly_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePropOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePropOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "PerformInvolvePropOnly", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePropOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePropOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePropOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePropOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics
	{
		struct ELSSAttackerComponent_eventSetCollisionOffset_Parms
		{
			FVector Offset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventSetCollisionOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "SetCollisionOffset", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventSetCollisionOffset_Parms), Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics
	{
		struct ELSSAttackerComponent_eventSetParentComponent_Parms
		{
			USceneComponent* parentComp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parentComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parentComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::NewProp_parentComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::NewProp_parentComp = { "parentComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventSetParentComponent_Parms, parentComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::NewProp_parentComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::NewProp_parentComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::NewProp_parentComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "SetParentComponent", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventSetParentComponent_Parms), Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics
	{
		struct ELSSAttackerComponent_eventSetupInvolve_Parms
		{
			AActor* AttackUser;
			AActor* AttackOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::NewProp_AttackUser = { "AttackUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventSetupInvolve_Parms, AttackUser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::NewProp_AttackOwner = { "AttackOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventSetupInvolve_Parms, AttackOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::NewProp_AttackUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::NewProp_AttackOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "SetupInvolve", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventSetupInvolve_Parms), Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics
	{
		struct ELSSAttackerComponent_eventTryAttack_Parms
		{
			AActor* inReceiveActor;
			FSSAttackInfo inAttackInfo;
			UPrimitiveComponent* inAtkCollision;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inReceiveActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inAttackInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inAtkCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inAtkCollision;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_inReceiveActor = { "inReceiveActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventTryAttack_Parms, inReceiveActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_inAttackInfo = { "inAttackInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventTryAttack_Parms, inAttackInfo), Z_Construct_UScriptStruct_FSSAttackInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_inAtkCollision_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_inAtkCollision = { "inAtkCollision", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventTryAttack_Parms, inAtkCollision), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_inAtkCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_inAtkCollision_MetaData)) };
	void Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSAttackerComponent_eventTryAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAttackerComponent_eventTryAttack_Parms), &Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_inReceiveActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_inAttackInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_inAtkCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "TryAttack", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventTryAttack_Parms), Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_TryAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_TryAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics
	{
		struct ELSSAttackerComponent_eventTryInvolve_Parms
		{
			AActor* inReceiveActor;
			FSSInvolveInfo inInvolveInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inReceiveActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inInvolveInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::NewProp_inReceiveActor = { "inReceiveActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventTryInvolve_Parms, inReceiveActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::NewProp_inInvolveInfo = { "inInvolveInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAttackerComponent_eventTryInvolve_Parms, inInvolveInfo), Z_Construct_UScriptStruct_FSSInvolveInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSAttackerComponent_eventTryInvolve_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAttackerComponent_eventTryInvolve_Parms), &Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::NewProp_inReceiveActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::NewProp_inInvolveInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "TryInvolve", nullptr, nullptr, sizeof(ELSSAttackerComponent_eventTryInvolve_Parms), Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_UpdateCollisionShape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_UpdateCollisionShape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_UpdateCollisionShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "UpdateCollisionShape", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_UpdateCollisionShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_UpdateCollisionShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_UpdateCollisionShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_UpdateCollisionShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAttackerComponent_UpdateInvolveCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAttackerComponent_UpdateInvolveCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAttackerComponent_UpdateInvolveCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAttackerComponent, nullptr, "UpdateInvolveCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAttackerComponent_UpdateInvolveCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAttackerComponent_UpdateInvolveCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAttackerComponent_UpdateInvolveCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAttackerComponent_UpdateInvolveCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSAttackerComponent_NoRegister()
	{
		return UELSSAttackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAttackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCollisions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackCollisions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCollisions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTimeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTimeCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackOverlaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackOverlaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackOverlaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvolveCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvolveCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvolvePropDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvolvePropDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvolvePlayerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvolvePlayerDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvolveInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvolveInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrampCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrampCollision;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrampActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrampActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrampActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrampVelocityDirectionFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrampVelocityDirectionFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrampDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrampDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrampVelocityCoef_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrampVelocityCoef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrampVelocityMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrampVelocityMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExecutingAttack_MetaData[];
#endif
		static void NewProp_bExecutingAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExecutingAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAttackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSAttackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSAttackerComponent_ActivateAttack, "ActivateAttack" }, // 2057397510
		{ &Z_Construct_UFunction_UELSSAttackerComponent_CheckDamage, "CheckDamage" }, // 4100318239
		{ &Z_Construct_UFunction_UELSSAttackerComponent_ClearAttack, "ClearAttack" }, // 1152425857
		{ &Z_Construct_UFunction_UELSSAttackerComponent_DeactivateAttack, "DeactivateAttack" }, // 2783754186
		{ &Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdate, "ForceUpdate" }, // 4232140887
		{ &Z_Construct_UFunction_UELSSAttackerComponent_ForceUpdateInvolveCollision, "ForceUpdateInvolveCollision" }, // 1497379035
		{ &Z_Construct_UFunction_UELSSAttackerComponent_GetInvolveInfo, "GetInvolveInfo" }, // 3430429515
		{ &Z_Construct_UFunction_UELSSAttackerComponent_IsEnableInvolve, "IsEnableInvolve" }, // 1522518212
		{ &Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapAttack, "OnBeginOverlapAttack" }, // 506792107
		{ &Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapInvolve, "OnBeginOverlapInvolve" }, // 1087745933
		{ &Z_Construct_UFunction_UELSSAttackerComponent_OnBeginOverlapTramp, "OnBeginOverlapTramp" }, // 1313098435
		{ &Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapAttack, "OnEndOverlapAttack" }, // 607816610
		{ &Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapInvolve, "OnEndOverlapInvolve" }, // 877920944
		{ &Z_Construct_UFunction_UELSSAttackerComponent_OnEndOverlapTramp, "OnEndOverlapTramp" }, // 75842791
		{ &Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolve, "PerformInvolve" }, // 2428028517
		{ &Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePlayerOnly, "PerformInvolvePlayerOnly" }, // 4004024509
		{ &Z_Construct_UFunction_UELSSAttackerComponent_PerformInvolvePropOnly, "PerformInvolvePropOnly" }, // 252825253
		{ &Z_Construct_UFunction_UELSSAttackerComponent_SetCollisionOffset, "SetCollisionOffset" }, // 1767411457
		{ &Z_Construct_UFunction_UELSSAttackerComponent_SetParentComponent, "SetParentComponent" }, // 426059988
		{ &Z_Construct_UFunction_UELSSAttackerComponent_SetupInvolve, "SetupInvolve" }, // 2781144141
		{ &Z_Construct_UFunction_UELSSAttackerComponent_TryAttack, "TryAttack" }, // 3277783740
		{ &Z_Construct_UFunction_UELSSAttackerComponent_TryInvolve, "TryInvolve" }, // 808581534
		{ &Z_Construct_UFunction_UELSSAttackerComponent_UpdateCollisionShape, "UpdateCollisionShape" }, // 4012385423
		{ &Z_Construct_UFunction_UELSSAttackerComponent_UpdateInvolveCollision, "UpdateInvolveCollision" }, // 878549223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELSSAttackerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackInfo = { "AttackInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, AttackInfo), Z_Construct_UScriptStruct_FSSAttackInfo, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackCollisions_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackCollisions_Inner = { "AttackCollisions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackCollisions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackCollisions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackCollisions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackCollisions = { "AttackCollisions", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, AttackCollisions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_ParentComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_ParentComponent = { "ParentComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, ParentComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_ParentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_ParentComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_ShapeBlend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_ShapeBlend = { "ShapeBlend", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, ShapeBlend), Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_ShapeBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_ShapeBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_BlendTimeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_BlendTimeCount = { "BlendTimeCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, BlendTimeCount), METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_BlendTimeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_BlendTimeCount_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackOverlaps_Inner = { "AttackOverlaps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAttackOverlap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackOverlaps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackOverlaps = { "AttackOverlaps", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, AttackOverlaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackOverlaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackOverlaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolveCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolveCollision = { "InvolveCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, InvolveCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolveCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolveCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolvePropDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolvePropDuration = { "InvolvePropDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, InvolvePropDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolvePropDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolvePropDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolvePlayerDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolvePlayerDuration = { "InvolvePlayerDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, InvolvePlayerDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolvePlayerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolvePlayerDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolveInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolveInfo = { "InvolveInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, InvolveInfo), Z_Construct_UScriptStruct_FSSInvolveInfo, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolveInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolveInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampCollision = { "TrampCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, TrampCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampCollision_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampActors_Inner = { "TrampActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampActors = { "TrampActors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, TrampActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityDirectionFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityDirectionFactor = { "TrampVelocityDirectionFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, TrampVelocityDirectionFactor), METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityDirectionFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityDirectionFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampDuration = { "TrampDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, TrampDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityCoef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityCoef = { "TrampVelocityCoef", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, TrampVelocityCoef), METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityCoef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityCoef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityMax = { "TrampVelocityMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAttackerComponent, TrampVelocityMax), METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_bExecutingAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAttackerComponent" },
		{ "ModuleRelativePath", "Public/ELSSAttackerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_bExecutingAttack_SetBit(void* Obj)
	{
		((UELSSAttackerComponent*)Obj)->bExecutingAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_bExecutingAttack = { "bExecutingAttack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSAttackerComponent), &Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_bExecutingAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_bExecutingAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_bExecutingAttack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSAttackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackCollisions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_ParentComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_ShapeBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_BlendTimeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackOverlaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_AttackOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolveCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolvePropDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolvePlayerDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_InvolveInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityDirectionFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityCoef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_TrampVelocityMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAttackerComponent_Statics::NewProp_bExecutingAttack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAttackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAttackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAttackerComponent_Statics::ClassParams = {
		&UELSSAttackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSAttackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAttackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAttackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAttackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAttackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAttackerComponent, 1805757715);
	template<> ABP_200508_API UClass* StaticClass<UELSSAttackerComponent>()
	{
		return UELSSAttackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAttackerComponent(Z_Construct_UClass_UELSSAttackerComponent, &UELSSAttackerComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAttackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAttackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
