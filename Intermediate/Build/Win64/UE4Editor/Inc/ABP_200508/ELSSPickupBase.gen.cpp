// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPickupBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPickupBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPickupBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPickupBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPickupType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRarity();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPickupTrans();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSSpawnPickupReason();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSPickupBase::execAttachRarityEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachRarityEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execCanBePickup)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_UBOOL(Z_Param_ignoreHasAuthority);
		P_GET_UBOOL_REF(Z_Param_Out_out_reasonIsFullInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBePickup(Z_Param_OtherActor,Z_Param_ignoreHasAuthority,Z_Param_Out_out_reasonIsFullInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execCanMinimapVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanMinimapVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execCheckCurrentEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCurrentEquipped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execCheckUpdateLostTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckUpdateLostTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execDestroyAfterLostEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyAfterLostEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execDetachRarityEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetachRarityEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execDoInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoInteract(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execGetIsNeedInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsNeedInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execGetMinimapLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMinimapLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execGetValueForInventoryIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValueForInventoryIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execIsBroken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBroken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execLaunch)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Launch(Z_Param_Out_Velocity,Z_Param_GravityScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execLostEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LostEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execLostEffect_Impl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LostEffect_Impl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnCanTouch)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCanTouch_Implementation(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnEquipCurrent)
	{
		P_GET_OBJECT(AELSSPickupBase,Z_Param_lastPickup);
		P_GET_OBJECT(AELSSPlayer,Z_Param_NewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipCurrent(Z_Param_lastPickup,Z_Param_NewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnInteractBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractBeginOverlap(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnInteractEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractEndOverlap(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnLaunchStop)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLaunchStop(Z_Param_Out_ImpactResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnPickedup)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickedup_Implementation(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnRep_IsCanTouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsCanTouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnRep_IsLaunchStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsLaunchStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnRep_LaunchInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LaunchInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnRep_PickupOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PickupOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnRep_PickupTrans)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PickupTrans();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execOnUnEquipCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnEquipCurrent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execPickup)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup_Implementation(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execPickupFailedOnFullInventory)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PickupFailedOnFullInventory(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execPickupOnTouch)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PickupOnTouch(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execRefreshVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execSetExternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execSetInternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execSetPickupOwner)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_NewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPickupOwner(Z_Param_NewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execToAttachParamRowName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->ToAttachParamRowName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPickupBase::execUpdateLostTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLostTimer(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_AELSSPickupBase_OnCanTouch = FName(TEXT("OnCanTouch"));
	void AELSSPickupBase::OnCanTouch(bool flg)
	{
		ELSSPickupBase_eventOnCanTouch_Parms Parms;
		Parms.flg=flg ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPickupBase_OnCanTouch),&Parms);
	}
	static FName NAME_AELSSPickupBase_OnPickedup = FName(TEXT("OnPickedup"));
	void AELSSPickupBase::OnPickedup(AActor* OtherActor)
	{
		ELSSPickupBase_eventOnPickedup_Parms Parms;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPickupBase_OnPickedup),&Parms);
	}
	static FName NAME_AELSSPickupBase_Pickup = FName(TEXT("Pickup"));
	void AELSSPickupBase::Pickup(AActor* OtherActor)
	{
		ELSSPickupBase_eventPickup_Parms Parms;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPickupBase_Pickup),&Parms);
	}
	void AELSSPickupBase::StaticRegisterNativesAELSSPickupBase()
	{
		UClass* Class = AELSSPickupBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachRarityEffect", &AELSSPickupBase::execAttachRarityEffect },
			{ "CanBePickup", &AELSSPickupBase::execCanBePickup },
			{ "CanMinimapVisible", &AELSSPickupBase::execCanMinimapVisible },
			{ "CheckCurrentEquipped", &AELSSPickupBase::execCheckCurrentEquipped },
			{ "CheckUpdateLostTimer", &AELSSPickupBase::execCheckUpdateLostTimer },
			{ "DestroyAfterLostEffect", &AELSSPickupBase::execDestroyAfterLostEffect },
			{ "DetachRarityEffect", &AELSSPickupBase::execDetachRarityEffect },
			{ "DoInteract", &AELSSPickupBase::execDoInteract },
			{ "GetIsNeedInteract", &AELSSPickupBase::execGetIsNeedInteract },
			{ "GetMinimapLocation", &AELSSPickupBase::execGetMinimapLocation },
			{ "GetValueForInventoryIcon", &AELSSPickupBase::execGetValueForInventoryIcon },
			{ "IsBroken", &AELSSPickupBase::execIsBroken },
			{ "Launch", &AELSSPickupBase::execLaunch },
			{ "LostEffect", &AELSSPickupBase::execLostEffect },
			{ "LostEffect_Impl", &AELSSPickupBase::execLostEffect_Impl },
			{ "OnCanTouch", &AELSSPickupBase::execOnCanTouch },
			{ "OnEquipCurrent", &AELSSPickupBase::execOnEquipCurrent },
			{ "OnInteractBeginOverlap", &AELSSPickupBase::execOnInteractBeginOverlap },
			{ "OnInteractEndOverlap", &AELSSPickupBase::execOnInteractEndOverlap },
			{ "OnLaunchStop", &AELSSPickupBase::execOnLaunchStop },
			{ "OnPickedup", &AELSSPickupBase::execOnPickedup },
			{ "OnRep_IsCanTouch", &AELSSPickupBase::execOnRep_IsCanTouch },
			{ "OnRep_IsLaunchStop", &AELSSPickupBase::execOnRep_IsLaunchStop },
			{ "OnRep_LaunchInfo", &AELSSPickupBase::execOnRep_LaunchInfo },
			{ "OnRep_PickupOwner", &AELSSPickupBase::execOnRep_PickupOwner },
			{ "OnRep_PickupTrans", &AELSSPickupBase::execOnRep_PickupTrans },
			{ "OnUnEquipCurrent", &AELSSPickupBase::execOnUnEquipCurrent },
			{ "Pickup", &AELSSPickupBase::execPickup },
			{ "PickupFailedOnFullInventory", &AELSSPickupBase::execPickupFailedOnFullInventory },
			{ "PickupOnTouch", &AELSSPickupBase::execPickupOnTouch },
			{ "RefreshVisibility", &AELSSPickupBase::execRefreshVisibility },
			{ "SetExternalVisible", &AELSSPickupBase::execSetExternalVisible },
			{ "SetInternalVisible", &AELSSPickupBase::execSetInternalVisible },
			{ "SetPickupOwner", &AELSSPickupBase::execSetPickupOwner },
			{ "ToAttachParamRowName", &AELSSPickupBase::execToAttachParamRowName },
			{ "UpdateLostTimer", &AELSSPickupBase::execUpdateLostTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSPickupBase_AttachRarityEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_AttachRarityEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_AttachRarityEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "AttachRarityEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_AttachRarityEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_AttachRarityEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_AttachRarityEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_AttachRarityEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics
	{
		struct ELSSPickupBase_eventCanBePickup_Parms
		{
			const AActor* OtherActor;
			bool ignoreHasAuthority;
			bool out_reasonIsFullInventory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static void NewProp_ignoreHasAuthority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ignoreHasAuthority;
		static void NewProp_out_reasonIsFullInventory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_out_reasonIsFullInventory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventCanBePickup_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_OtherActor_MetaData)) };
	void Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_ignoreHasAuthority_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventCanBePickup_Parms*)Obj)->ignoreHasAuthority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_ignoreHasAuthority = { "ignoreHasAuthority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventCanBePickup_Parms), &Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_ignoreHasAuthority_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_out_reasonIsFullInventory_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventCanBePickup_Parms*)Obj)->out_reasonIsFullInventory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_out_reasonIsFullInventory = { "out_reasonIsFullInventory", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventCanBePickup_Parms), &Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_out_reasonIsFullInventory_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventCanBePickup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventCanBePickup_Parms), &Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_ignoreHasAuthority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_out_reasonIsFullInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "CanBePickup", nullptr, nullptr, sizeof(ELSSPickupBase_eventCanBePickup_Parms), Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_CanBePickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_CanBePickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics
	{
		struct ELSSPickupBase_eventCanMinimapVisible_Parms
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
	void Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventCanMinimapVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventCanMinimapVisible_Parms), &Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "CanMinimapVisible", nullptr, nullptr, sizeof(ELSSPickupBase_eventCanMinimapVisible_Parms), Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics
	{
		struct ELSSPickupBase_eventCheckCurrentEquipped_Parms
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
	void Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventCheckCurrentEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventCheckCurrentEquipped_Parms), &Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "CheckCurrentEquipped", nullptr, nullptr, sizeof(ELSSPickupBase_eventCheckCurrentEquipped_Parms), Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics
	{
		struct ELSSPickupBase_eventCheckUpdateLostTimer_Parms
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
	void Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventCheckUpdateLostTimer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventCheckUpdateLostTimer_Parms), &Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "CheckUpdateLostTimer", nullptr, nullptr, sizeof(ELSSPickupBase_eventCheckUpdateLostTimer_Parms), Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_DestroyAfterLostEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_DestroyAfterLostEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_DestroyAfterLostEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "DestroyAfterLostEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_DestroyAfterLostEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_DestroyAfterLostEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_DestroyAfterLostEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_DestroyAfterLostEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_DetachRarityEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_DetachRarityEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_DetachRarityEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "DetachRarityEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_DetachRarityEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_DetachRarityEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_DetachRarityEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_DetachRarityEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics
	{
		struct ELSSPickupBase_eventDoInteract_Parms
		{
			AActor* OtherActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventDoInteract_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventDoInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventDoInteract_Parms), &Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "DoInteract", nullptr, nullptr, sizeof(ELSSPickupBase_eventDoInteract_Parms), Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_DoInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_DoInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics
	{
		struct ELSSPickupBase_eventGetIsNeedInteract_Parms
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
	void Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventGetIsNeedInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventGetIsNeedInteract_Parms), &Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "GetIsNeedInteract", nullptr, nullptr, sizeof(ELSSPickupBase_eventGetIsNeedInteract_Parms), Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics
	{
		struct ELSSPickupBase_eventGetMinimapLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventGetMinimapLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "GetMinimapLocation", nullptr, nullptr, sizeof(ELSSPickupBase_eventGetMinimapLocation_Parms), Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics
	{
		struct ELSSPickupBase_eventGetValueForInventoryIcon_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventGetValueForInventoryIcon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "GetValueForInventoryIcon", nullptr, nullptr, sizeof(ELSSPickupBase_eventGetValueForInventoryIcon_Parms), Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics
	{
		struct ELSSPickupBase_eventIsBroken_Parms
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
	void Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventIsBroken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventIsBroken_Parms), &Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "IsBroken", nullptr, nullptr, sizeof(ELSSPickupBase_eventIsBroken_Parms), Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_IsBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_IsBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_Launch_Statics
	{
		struct ELSSPickupBase_eventLaunch_Parms
		{
			FVector Velocity;
			float GravityScale;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventLaunch_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::NewProp_Velocity_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventLaunch_Parms, GravityScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::NewProp_GravityScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "Launch", nullptr, nullptr, sizeof(ELSSPickupBase_eventLaunch_Parms), Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_Launch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_Launch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_LostEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_LostEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_LostEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "LostEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_LostEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_LostEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_LostEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_LostEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_LostEffect_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_LostEffect_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_LostEffect_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "LostEffect_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_LostEffect_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_LostEffect_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_LostEffect_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_LostEffect_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics
	{
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventOnCanTouch_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventOnCanTouch_Parms), &Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnCanTouch", nullptr, nullptr, sizeof(ELSSPickupBase_eventOnCanTouch_Parms), Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnCanTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnCanTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics
	{
		struct ELSSPickupBase_eventOnEquipCurrent_Parms
		{
			AELSSPickupBase* lastPickup;
			AELSSPlayer* NewOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lastPickup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::NewProp_lastPickup = { "lastPickup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnEquipCurrent_Parms, lastPickup), Z_Construct_UClass_AELSSPickupBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnEquipCurrent_Parms, NewOwner), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::NewProp_lastPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::NewProp_NewOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnEquipCurrent", nullptr, nullptr, sizeof(ELSSPickupBase_eventOnEquipCurrent_Parms), Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics
	{
		struct ELSSPickupBase_eventOnInteractBeginOverlap_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnInteractBeginOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnInteractBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnInteractBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnInteractBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventOnInteractBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventOnInteractBeginOverlap_Parms), &Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnInteractBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnInteractBeginOverlap", nullptr, nullptr, sizeof(ELSSPickupBase_eventOnInteractBeginOverlap_Parms), Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics
	{
		struct ELSSPickupBase_eventOnInteractEndOverlap_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnInteractEndOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnInteractEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnInteractEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnInteractEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnInteractEndOverlap", nullptr, nullptr, sizeof(ELSSPickupBase_eventOnInteractEndOverlap_Parms), Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics
	{
		struct ELSSPickupBase_eventOnLaunchStop_Parms
		{
			FHitResult ImpactResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnLaunchStop_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::NewProp_ImpactResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::NewProp_ImpactResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::NewProp_ImpactResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnLaunchStop", nullptr, nullptr, sizeof(ELSSPickupBase_eventOnLaunchStop_Parms), Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventOnPickedup_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnPickedup", nullptr, nullptr, sizeof(ELSSPickupBase_eventOnPickedup_Parms), Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnPickedup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnPickedup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnRep_IsCanTouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnRep_IsCanTouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnRep_IsCanTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnRep_IsCanTouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnRep_IsCanTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnRep_IsCanTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnRep_IsCanTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnRep_IsCanTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnRep_IsLaunchStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnRep_IsLaunchStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnRep_IsLaunchStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnRep_IsLaunchStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnRep_IsLaunchStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnRep_IsLaunchStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnRep_IsLaunchStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnRep_IsLaunchStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnRep_LaunchInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnRep_LaunchInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnRep_LaunchInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnRep_LaunchInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnRep_LaunchInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnRep_LaunchInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnRep_LaunchInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnRep_LaunchInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupOwner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnRep_PickupOwner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupTrans_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupTrans_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupTrans_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnRep_PickupTrans", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupTrans_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupTrans_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupTrans()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupTrans_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_OnUnEquipCurrent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_OnUnEquipCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_OnUnEquipCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "OnUnEquipCurrent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_OnUnEquipCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_OnUnEquipCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_OnUnEquipCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_OnUnEquipCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventPickup_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "Pickup", nullptr, nullptr, sizeof(ELSSPickupBase_eventPickup_Parms), Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics
	{
		struct ELSSPickupBase_eventPickupFailedOnFullInventory_Parms
		{
			AActor* OtherActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventPickupFailedOnFullInventory_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventPickupFailedOnFullInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventPickupFailedOnFullInventory_Parms), &Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "PickupFailedOnFullInventory", nullptr, nullptr, sizeof(ELSSPickupBase_eventPickupFailedOnFullInventory_Parms), Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics
	{
		struct ELSSPickupBase_eventPickupOnTouch_Parms
		{
			AActor* OtherActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventPickupOnTouch_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventPickupOnTouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventPickupOnTouch_Parms), &Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "PickupOnTouch", nullptr, nullptr, sizeof(ELSSPickupBase_eventPickupOnTouch_Parms), Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_RefreshVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_RefreshVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_RefreshVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "RefreshVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_RefreshVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_RefreshVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_RefreshVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_RefreshVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics
	{
		struct ELSSPickupBase_eventSetExternalVisible_Parms
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
	void Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventSetExternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventSetExternalVisible_Parms), &Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "SetExternalVisible", nullptr, nullptr, sizeof(ELSSPickupBase_eventSetExternalVisible_Parms), Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics
	{
		struct ELSSPickupBase_eventSetInternalVisible_Parms
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
	void Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSPickupBase_eventSetInternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPickupBase_eventSetInternalVisible_Parms), &Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "SetInternalVisible", nullptr, nullptr, sizeof(ELSSPickupBase_eventSetInternalVisible_Parms), Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics
	{
		struct ELSSPickupBase_eventSetPickupOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventSetPickupOwner_Parms, NewOwner), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics::NewProp_NewOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "SetPickupOwner", nullptr, nullptr, sizeof(ELSSPickupBase_eventSetPickupOwner_Parms), Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics
	{
		struct ELSSPickupBase_eventToAttachParamRowName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventToAttachParamRowName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "ToAttachParamRowName", nullptr, nullptr, sizeof(ELSSPickupBase_eventToAttachParamRowName_Parms), Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics
	{
		struct ELSSPickupBase_eventUpdateLostTimer_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPickupBase_eventUpdateLostTimer_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPickupBase, nullptr, "UpdateLostTimer", nullptr, nullptr, sizeof(ELSSPickupBase_eventUpdateLostTimer_Parms), Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSPickupBase_NoRegister()
	{
		return AELSSPickupBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSPickupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PickupType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PickupType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DatabaseId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupTrans_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PickupTrans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLaunchStop_MetaData[];
#endif
		static void NewProp_IsLaunchStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLaunchStop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCanTouch_MetaData[];
#endif
		static void NewProp_IsCanTouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCanTouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLastOwnerLocallyControlled_MetaData[];
#endif
		static void NewProp_IsLastOwnerLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLastOwnerLocallyControlled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCurrentEquipped_MetaData[];
#endif
		static void NewProp_IsCurrentEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCurrentEquipped;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RarityEffectDatabaseRowNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityEffectDatabaseRowNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RarityEffectDatabaseRowNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LostEffectDatabaseRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LostEffectDatabaseRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LostEffectDelaySec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LostEffectDelaySec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyAfterLostEffectDelaySec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestroyAfterLostEffectDelaySec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalledLostEffect_MetaData[];
#endif
		static void NewProp_CalledLostEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CalledLostEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LostSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LostSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LostTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LostTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReservedLostByTimer_MetaData[];
#endif
		static void NewProp_bReservedLostByTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReservedLostByTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySpawnedSEConditionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaySpawnedSEConditionTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractUIOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractUIOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSPickupBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSPickupBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSPickupBase_AttachRarityEffect, "AttachRarityEffect" }, // 3214883508
		{ &Z_Construct_UFunction_AELSSPickupBase_CanBePickup, "CanBePickup" }, // 3453721331
		{ &Z_Construct_UFunction_AELSSPickupBase_CanMinimapVisible, "CanMinimapVisible" }, // 126880555
		{ &Z_Construct_UFunction_AELSSPickupBase_CheckCurrentEquipped, "CheckCurrentEquipped" }, // 4137304585
		{ &Z_Construct_UFunction_AELSSPickupBase_CheckUpdateLostTimer, "CheckUpdateLostTimer" }, // 1024977633
		{ &Z_Construct_UFunction_AELSSPickupBase_DestroyAfterLostEffect, "DestroyAfterLostEffect" }, // 281165977
		{ &Z_Construct_UFunction_AELSSPickupBase_DetachRarityEffect, "DetachRarityEffect" }, // 2777344862
		{ &Z_Construct_UFunction_AELSSPickupBase_DoInteract, "DoInteract" }, // 2593674195
		{ &Z_Construct_UFunction_AELSSPickupBase_GetIsNeedInteract, "GetIsNeedInteract" }, // 2227320367
		{ &Z_Construct_UFunction_AELSSPickupBase_GetMinimapLocation, "GetMinimapLocation" }, // 4271604346
		{ &Z_Construct_UFunction_AELSSPickupBase_GetValueForInventoryIcon, "GetValueForInventoryIcon" }, // 23907347
		{ &Z_Construct_UFunction_AELSSPickupBase_IsBroken, "IsBroken" }, // 2927908443
		{ &Z_Construct_UFunction_AELSSPickupBase_Launch, "Launch" }, // 935684310
		{ &Z_Construct_UFunction_AELSSPickupBase_LostEffect, "LostEffect" }, // 2824075559
		{ &Z_Construct_UFunction_AELSSPickupBase_LostEffect_Impl, "LostEffect_Impl" }, // 3355791442
		{ &Z_Construct_UFunction_AELSSPickupBase_OnCanTouch, "OnCanTouch" }, // 789840460
		{ &Z_Construct_UFunction_AELSSPickupBase_OnEquipCurrent, "OnEquipCurrent" }, // 642981906
		{ &Z_Construct_UFunction_AELSSPickupBase_OnInteractBeginOverlap, "OnInteractBeginOverlap" }, // 1558622031
		{ &Z_Construct_UFunction_AELSSPickupBase_OnInteractEndOverlap, "OnInteractEndOverlap" }, // 2762724860
		{ &Z_Construct_UFunction_AELSSPickupBase_OnLaunchStop, "OnLaunchStop" }, // 723045131
		{ &Z_Construct_UFunction_AELSSPickupBase_OnPickedup, "OnPickedup" }, // 303898759
		{ &Z_Construct_UFunction_AELSSPickupBase_OnRep_IsCanTouch, "OnRep_IsCanTouch" }, // 548702982
		{ &Z_Construct_UFunction_AELSSPickupBase_OnRep_IsLaunchStop, "OnRep_IsLaunchStop" }, // 972907294
		{ &Z_Construct_UFunction_AELSSPickupBase_OnRep_LaunchInfo, "OnRep_LaunchInfo" }, // 739584466
		{ &Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupOwner, "OnRep_PickupOwner" }, // 4114849796
		{ &Z_Construct_UFunction_AELSSPickupBase_OnRep_PickupTrans, "OnRep_PickupTrans" }, // 3569768932
		{ &Z_Construct_UFunction_AELSSPickupBase_OnUnEquipCurrent, "OnUnEquipCurrent" }, // 149925409
		{ &Z_Construct_UFunction_AELSSPickupBase_Pickup, "Pickup" }, // 1210208679
		{ &Z_Construct_UFunction_AELSSPickupBase_PickupFailedOnFullInventory, "PickupFailedOnFullInventory" }, // 1289479598
		{ &Z_Construct_UFunction_AELSSPickupBase_PickupOnTouch, "PickupOnTouch" }, // 2351596374
		{ &Z_Construct_UFunction_AELSSPickupBase_RefreshVisibility, "RefreshVisibility" }, // 3379003839
		{ &Z_Construct_UFunction_AELSSPickupBase_SetExternalVisible, "SetExternalVisible" }, // 3355776512
		{ &Z_Construct_UFunction_AELSSPickupBase_SetInternalVisible, "SetInternalVisible" }, // 3725238736
		{ &Z_Construct_UFunction_AELSSPickupBase_SetPickupOwner, "SetPickupOwner" }, // 2507711297
		{ &Z_Construct_UFunction_AELSSPickupBase_ToAttachParamRowName, "ToAttachParamRowName" }, // 3672408374
		{ &Z_Construct_UFunction_AELSSPickupBase_UpdateLostTimer, "UpdateLostTimer" }, // 812776178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPickupBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_InteractCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_InteractCollision = { "InteractCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, InteractCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_InteractCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_InteractCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupType = { "PickupType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, PickupType), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_DatabaseId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_DatabaseId = { "DatabaseId", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, DatabaseId), METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_DatabaseId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_DatabaseId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_Rarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, Rarity), Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_Rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LaunchInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LaunchInfo = { "LaunchInfo", "OnRep_LaunchInfo", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, LaunchInfo), Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LaunchInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LaunchInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupTrans_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupTrans = { "PickupTrans", "OnRep_PickupTrans", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, PickupTrans), Z_Construct_UScriptStruct_FSSPickupTrans, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupTrans_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupTrans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLaunchStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLaunchStop_SetBit(void* Obj)
	{
		((AELSSPickupBase*)Obj)->IsLaunchStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLaunchStop = { "IsLaunchStop", "OnRep_IsLaunchStop", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AELSSPickupBase), &Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLaunchStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLaunchStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLaunchStop_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_OverlappingActors_Inner = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_OverlappingActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, OverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_OverlappingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_OverlappingActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCanTouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCanTouch_SetBit(void* Obj)
	{
		((AELSSPickupBase*)Obj)->IsCanTouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCanTouch = { "IsCanTouch", "OnRep_IsCanTouch", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AELSSPickupBase), &Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCanTouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCanTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCanTouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupOwner = { "PickupOwner", "OnRep_PickupOwner", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, PickupOwner), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLastOwnerLocallyControlled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLastOwnerLocallyControlled_SetBit(void* Obj)
	{
		((AELSSPickupBase*)Obj)->IsLastOwnerLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLastOwnerLocallyControlled = { "IsLastOwnerLocallyControlled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AELSSPickupBase), &Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLastOwnerLocallyControlled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLastOwnerLocallyControlled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLastOwnerLocallyControlled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCurrentEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCurrentEquipped_SetBit(void* Obj)
	{
		((AELSSPickupBase*)Obj)->IsCurrentEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCurrentEquipped = { "IsCurrentEquipped", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AELSSPickupBase), &Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCurrentEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCurrentEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCurrentEquipped_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffectDatabaseRowNames_Inner = { "RarityEffectDatabaseRowNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffectDatabaseRowNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffectDatabaseRowNames = { "RarityEffectDatabaseRowNames", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, RarityEffectDatabaseRowNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffectDatabaseRowNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffectDatabaseRowNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffect = { "RarityEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, RarityEffect), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostEffectDatabaseRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostEffectDatabaseRowName = { "LostEffectDatabaseRowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, LostEffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostEffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostEffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostEffectDelaySec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostEffectDelaySec = { "LostEffectDelaySec", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, LostEffectDelaySec), METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostEffectDelaySec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostEffectDelaySec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_DestroyAfterLostEffectDelaySec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_DestroyAfterLostEffectDelaySec = { "DestroyAfterLostEffectDelaySec", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, DestroyAfterLostEffectDelaySec), METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_DestroyAfterLostEffectDelaySec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_DestroyAfterLostEffectDelaySec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_CalledLostEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_CalledLostEffect_SetBit(void* Obj)
	{
		((AELSSPickupBase*)Obj)->CalledLostEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_CalledLostEffect = { "CalledLostEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPickupBase), &Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_CalledLostEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_CalledLostEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_CalledLostEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostSec = { "LostSec", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, LostSec), METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostTimer = { "LostTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, LostTimer), METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_bReservedLostByTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_bReservedLostByTimer_SetBit(void* Obj)
	{
		((AELSSPickupBase*)Obj)->bReservedLostByTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_bReservedLostByTimer = { "bReservedLostByTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPickupBase), &Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_bReservedLostByTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_bReservedLostByTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_bReservedLostByTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnedTime = { "SpawnedTime", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, SpawnedTime), METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PlaySpawnedSEConditionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PlaySpawnedSEConditionTime = { "PlaySpawnedSEConditionTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, PlaySpawnedSEConditionTime), METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PlaySpawnedSEConditionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PlaySpawnedSEConditionTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnReason = { "SpawnReason", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, SpawnReason), Z_Construct_UEnum_ABP_200508_ESSSpawnPickupReason, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_InteractUIOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPickupBase" },
		{ "ModuleRelativePath", "Public/ELSSPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_InteractUIOffset = { "InteractUIOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPickupBase, InteractUIOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_InteractUIOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_InteractUIOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSPickupBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_InteractCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_DatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LaunchInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupTrans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLaunchStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_OverlappingActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_OverlappingActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCanTouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PickupOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsLastOwnerLocallyControlled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_IsCurrentEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffectDatabaseRowNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffectDatabaseRowNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_RarityEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostEffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostEffectDelaySec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_DestroyAfterLostEffectDelaySec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_CalledLostEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_LostTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_bReservedLostByTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_PlaySpawnedSEConditionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_SpawnReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPickupBase_Statics::NewProp_InteractUIOffset,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSPickupBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSPickupBase, IELSSActorCommonInterface), false },
			{ Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSPickupBase, IELSSInteractableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSPickupBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSPickupBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSPickupBase_Statics::ClassParams = {
		&AELSSPickupBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSPickupBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSPickupBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPickupBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSPickupBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSPickupBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSPickupBase, 3157549265);
	template<> ABP_200508_API UClass* StaticClass<AELSSPickupBase>()
	{
		return AELSSPickupBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSPickupBase(Z_Construct_UClass_AELSSPickupBase, &AELSSPickupBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSPickupBase"), false, nullptr, nullptr, nullptr);

	void AELSSPickupBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DatabaseId(TEXT("DatabaseId"));
		static const FName Name_LaunchInfo(TEXT("LaunchInfo"));
		static const FName Name_PickupTrans(TEXT("PickupTrans"));
		static const FName Name_IsLaunchStop(TEXT("IsLaunchStop"));
		static const FName Name_IsCanTouch(TEXT("IsCanTouch"));
		static const FName Name_PickupOwner(TEXT("PickupOwner"));
		static const FName Name_SpawnedTime(TEXT("SpawnedTime"));
		static const FName Name_SpawnReason(TEXT("SpawnReason"));

		const bool bIsValid = true
			&& Name_DatabaseId == ClassReps[(int32)ENetFields_Private::DatabaseId].Property->GetFName()
			&& Name_LaunchInfo == ClassReps[(int32)ENetFields_Private::LaunchInfo].Property->GetFName()
			&& Name_PickupTrans == ClassReps[(int32)ENetFields_Private::PickupTrans].Property->GetFName()
			&& Name_IsLaunchStop == ClassReps[(int32)ENetFields_Private::IsLaunchStop].Property->GetFName()
			&& Name_IsCanTouch == ClassReps[(int32)ENetFields_Private::IsCanTouch].Property->GetFName()
			&& Name_PickupOwner == ClassReps[(int32)ENetFields_Private::PickupOwner].Property->GetFName()
			&& Name_SpawnedTime == ClassReps[(int32)ENetFields_Private::SpawnedTime].Property->GetFName()
			&& Name_SpawnReason == ClassReps[(int32)ENetFields_Private::SpawnReason].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSPickupBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSPickupBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
