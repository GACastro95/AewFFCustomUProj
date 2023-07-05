// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSoundManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSoundManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSoundManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSoundManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageSE();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHitGroundSE();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAnnounce();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSSpawnPickupSE();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSSoundData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSManagerActorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSSoundManager::execCompleteLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execIsLoadCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoadCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlay2DSE_ForCueEvent)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_InCue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play2DSE_ForCueEvent(Z_Param_InCue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlay2DSE_ForString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play2DSE_ForString(Z_Param_CueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlay3DSE)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_InCue);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play3DSE_Implementation(Z_Param_InCue,Z_Param_inMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlay3DSEAtLocation_ForString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play3DSEAtLocation_ForString(Z_Param_CueName,Z_Param_Out_InLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlay3DSEAttached_ForString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play3DSEAttached_ForString(Z_Param_CueName,Z_Param_inMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlayAnnounce)
	{
		P_GET_ENUM(ESSAnnounce,Z_Param_inAnnounce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAnnounce(ESSAnnounce(Z_Param_inAnnounce));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlayLoop2DSE)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PlayLoop2DSE_Implementation(Z_Param_CueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlayLoop3DSE)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_InCue);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PlayLoop3DSE_Implementation(Z_Param_InCue,Z_Param_inMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlayLoop3DSE_OutAtomComponent)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_InCue);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMeshComponent);
		P_GET_OBJECT_REF(UAtomComponent,Z_Param_Out_out_AtomComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PlayLoop3DSE_OutAtomComponent_Implementation(Z_Param_InCue,Z_Param_inMeshComponent,Z_Param_Out_out_AtomComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlaySE_Damage)
	{
		P_GET_ENUM(ESSDamageSE,Z_Param_inDamageSE);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMeshComponent);
		P_GET_UBOOL(Z_Param_inPlay2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySE_Damage(ESSDamageSE(Z_Param_inDamageSE),Z_Param_inMeshComponent,Z_Param_inPlay2D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlaySE_HitGround)
	{
		P_GET_ENUM(ESSHitGroundSE,Z_Param_inHitGroundSE);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMeshComponent);
		P_GET_UBOOL(Z_Param_inPlay2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySE_HitGround(ESSHitGroundSE(Z_Param_inHitGroundSE),Z_Param_inMeshComponent,Z_Param_inPlay2D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execPlaySE_SpawnPickup)
	{
		P_GET_ENUM(ESSSpawnPickupSE,Z_Param_inSpawnPickupSE);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySE_SpawnPickup(ESSSpawnPickupSE(Z_Param_inSpawnPickupSE),Z_Param_inMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execRequestLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLoad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSoundManager::execStopLoopSE)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_loopSEUniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLoopSE_Implementation(Z_Param_loopSEUniqueId);
		P_NATIVE_END;
	}
	static FName NAME_AELSSSoundManager_GetSoundAtomCue_Damage = FName(TEXT("GetSoundAtomCue_Damage"));
	USoundAtomCue* AELSSSoundManager::GetSoundAtomCue_Damage(ESSDamageSE inDamageSE) const
	{
		ELSSSoundManager_eventGetSoundAtomCue_Damage_Parms Parms;
		Parms.inDamageSE=inDamageSE;
		const_cast<AELSSSoundManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSSoundManager_GetSoundAtomCue_Damage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSSoundManager_GetSoundAtomCue_HitGround = FName(TEXT("GetSoundAtomCue_HitGround"));
	USoundAtomCue* AELSSSoundManager::GetSoundAtomCue_HitGround(ESSHitGroundSE inHitGroundSE, UMeshComponent* inMeshComponent) const
	{
		ELSSSoundManager_eventGetSoundAtomCue_HitGround_Parms Parms;
		Parms.inHitGroundSE=inHitGroundSE;
		Parms.inMeshComponent=inMeshComponent;
		const_cast<AELSSSoundManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSSoundManager_GetSoundAtomCue_HitGround),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSSoundManager_LoadImpl = FName(TEXT("LoadImpl"));
	void AELSSSoundManager::LoadImpl()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSSoundManager_LoadImpl),NULL);
	}
	static FName NAME_AELSSSoundManager_Play3DSE = FName(TEXT("Play3DSE"));
	void AELSSSoundManager::Play3DSE(USoundAtomCue* InCue, UMeshComponent* inMeshComponent)
	{
		ELSSSoundManager_eventPlay3DSE_Parms Parms;
		Parms.InCue=InCue;
		Parms.inMeshComponent=inMeshComponent;
		ProcessEvent(FindFunctionChecked(NAME_AELSSSoundManager_Play3DSE),&Parms);
	}
	static FName NAME_AELSSSoundManager_PlayLoop2DSE = FName(TEXT("PlayLoop2DSE"));
	int32 AELSSSoundManager::PlayLoop2DSE(const FString& CueName)
	{
		ELSSSoundManager_eventPlayLoop2DSE_Parms Parms;
		Parms.CueName=CueName;
		ProcessEvent(FindFunctionChecked(NAME_AELSSSoundManager_PlayLoop2DSE),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSSoundManager_PlayLoop3DSE = FName(TEXT("PlayLoop3DSE"));
	int32 AELSSSoundManager::PlayLoop3DSE(USoundAtomCue* InCue, UMeshComponent* inMeshComponent)
	{
		ELSSSoundManager_eventPlayLoop3DSE_Parms Parms;
		Parms.InCue=InCue;
		Parms.inMeshComponent=inMeshComponent;
		ProcessEvent(FindFunctionChecked(NAME_AELSSSoundManager_PlayLoop3DSE),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent = FName(TEXT("PlayLoop3DSE_OutAtomComponent"));
	int32 AELSSSoundManager::PlayLoop3DSE_OutAtomComponent(USoundAtomCue* InCue, UMeshComponent* inMeshComponent, UAtomComponent*& out_AtomComponent)
	{
		ELSSSoundManager_eventPlayLoop3DSE_OutAtomComponent_Parms Parms;
		Parms.InCue=InCue;
		Parms.inMeshComponent=inMeshComponent;
		Parms.out_AtomComponent=out_AtomComponent;
		ProcessEvent(FindFunctionChecked(NAME_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent),&Parms);
		out_AtomComponent=Parms.out_AtomComponent;
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSSoundManager_StopLoopSE = FName(TEXT("StopLoopSE"));
	void AELSSSoundManager::StopLoopSE(int32 loopSEUniqueId)
	{
		ELSSSoundManager_eventStopLoopSE_Parms Parms;
		Parms.loopSEUniqueId=loopSEUniqueId;
		ProcessEvent(FindFunctionChecked(NAME_AELSSSoundManager_StopLoopSE),&Parms);
	}
	void AELSSSoundManager::StaticRegisterNativesAELSSSoundManager()
	{
		UClass* Class = AELSSSoundManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteLoading", &AELSSSoundManager::execCompleteLoading },
			{ "IsLoadCompleted", &AELSSSoundManager::execIsLoadCompleted },
			{ "Play2DSE_ForCueEvent", &AELSSSoundManager::execPlay2DSE_ForCueEvent },
			{ "Play2DSE_ForString", &AELSSSoundManager::execPlay2DSE_ForString },
			{ "Play3DSE", &AELSSSoundManager::execPlay3DSE },
			{ "Play3DSEAtLocation_ForString", &AELSSSoundManager::execPlay3DSEAtLocation_ForString },
			{ "Play3DSEAttached_ForString", &AELSSSoundManager::execPlay3DSEAttached_ForString },
			{ "PlayAnnounce", &AELSSSoundManager::execPlayAnnounce },
			{ "PlayLoop2DSE", &AELSSSoundManager::execPlayLoop2DSE },
			{ "PlayLoop3DSE", &AELSSSoundManager::execPlayLoop3DSE },
			{ "PlayLoop3DSE_OutAtomComponent", &AELSSSoundManager::execPlayLoop3DSE_OutAtomComponent },
			{ "PlaySE_Damage", &AELSSSoundManager::execPlaySE_Damage },
			{ "PlaySE_HitGround", &AELSSSoundManager::execPlaySE_HitGround },
			{ "PlaySE_SpawnPickup", &AELSSSoundManager::execPlaySE_SpawnPickup },
			{ "RequestLoad", &AELSSSoundManager::execRequestLoad },
			{ "StopLoopSE", &AELSSSoundManager::execStopLoopSE },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSSoundManager_CompleteLoading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_CompleteLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_CompleteLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "CompleteLoading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_CompleteLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_CompleteLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_CompleteLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_CompleteLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inDamageSE_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inDamageSE;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::NewProp_inDamageSE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::NewProp_inDamageSE = { "inDamageSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventGetSoundAtomCue_Damage_Parms, inDamageSE), Z_Construct_UEnum_ABP_200508_ESSDamageSE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventGetSoundAtomCue_Damage_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::NewProp_inDamageSE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::NewProp_inDamageSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "GetSoundAtomCue_Damage", nullptr, nullptr, sizeof(ELSSSoundManager_eventGetSoundAtomCue_Damage_Parms), Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inHitGroundSE_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inHitGroundSE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_inHitGroundSE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_inHitGroundSE = { "inHitGroundSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventGetSoundAtomCue_HitGround_Parms, inHitGroundSE), Z_Construct_UEnum_ABP_200508_ESSHitGroundSE, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_inMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_inMeshComponent = { "inMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventGetSoundAtomCue_HitGround_Parms, inMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_inMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_inMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventGetSoundAtomCue_HitGround_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_inHitGroundSE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_inHitGroundSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_inMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "GetSoundAtomCue_HitGround", nullptr, nullptr, sizeof(ELSSSoundManager_eventGetSoundAtomCue_HitGround_Parms), Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics
	{
		struct ELSSSoundManager_eventIsLoadCompleted_Parms
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
	void Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSSoundManager_eventIsLoadCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSoundManager_eventIsLoadCompleted_Parms), &Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "IsLoadCompleted", nullptr, nullptr, sizeof(ELSSSoundManager_eventIsLoadCompleted_Parms), Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_LoadImpl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_LoadImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_LoadImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "LoadImpl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_LoadImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_LoadImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_LoadImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_LoadImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics
	{
		struct ELSSSoundManager_eventPlay2DSE_ForCueEvent_Parms
		{
			USoundAtomCue* InCue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics::NewProp_InCue = { "InCue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlay2DSE_ForCueEvent_Parms, InCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics::NewProp_InCue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "Play2DSE_ForCueEvent", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlay2DSE_ForCueEvent_Parms), Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics
	{
		struct ELSSSoundManager_eventPlay2DSE_ForString_Parms
		{
			FString CueName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlay2DSE_ForString_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::NewProp_CueName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::NewProp_CueName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "Play2DSE_ForString", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlay2DSE_ForString_Parms), Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::NewProp_InCue = { "InCue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlay3DSE_Parms, InCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::NewProp_inMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::NewProp_inMeshComponent = { "inMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlay3DSE_Parms, inMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::NewProp_inMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::NewProp_inMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::NewProp_InCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::NewProp_inMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "Play3DSE", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlay3DSE_Parms), Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_Play3DSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_Play3DSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics
	{
		struct ELSSSoundManager_eventPlay3DSEAtLocation_ForString_Parms
		{
			FString CueName;
			FVector InLocation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlay3DSEAtLocation_ForString_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::NewProp_CueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlay3DSEAtLocation_ForString_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::NewProp_InLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::NewProp_InLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "Play3DSEAtLocation_ForString", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlay3DSEAtLocation_ForString_Parms), Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics
	{
		struct ELSSSoundManager_eventPlay3DSEAttached_ForString_Parms
		{
			FString CueName;
			UMeshComponent* inMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlay3DSEAttached_ForString_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::NewProp_CueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::NewProp_inMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::NewProp_inMeshComponent = { "inMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlay3DSEAttached_ForString_Parms, inMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::NewProp_inMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::NewProp_inMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::NewProp_inMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "Play3DSEAttached_ForString", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlay3DSEAttached_ForString_Parms), Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics
	{
		struct ELSSSoundManager_eventPlayAnnounce_Parms
		{
			ESSAnnounce inAnnounce;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inAnnounce_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inAnnounce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::NewProp_inAnnounce_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::NewProp_inAnnounce = { "inAnnounce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlayAnnounce_Parms, inAnnounce), Z_Construct_UEnum_ABP_200508_ESSAnnounce, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::NewProp_inAnnounce_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::NewProp_inAnnounce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "PlayAnnounce", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlayAnnounce_Parms), Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlayLoop2DSE_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::NewProp_CueName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlayLoop2DSE_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "PlayLoop2DSE", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlayLoop2DSE_Parms), Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::NewProp_InCue = { "InCue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlayLoop3DSE_Parms, InCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::NewProp_inMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::NewProp_inMeshComponent = { "inMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlayLoop3DSE_Parms, inMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::NewProp_inMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::NewProp_inMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlayLoop3DSE_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::NewProp_InCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::NewProp_inMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "PlayLoop3DSE", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlayLoop3DSE_Parms), Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_out_AtomComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_AtomComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_InCue = { "InCue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlayLoop3DSE_OutAtomComponent_Parms, InCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_inMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_inMeshComponent = { "inMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlayLoop3DSE_OutAtomComponent_Parms, inMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_inMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_inMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_out_AtomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_out_AtomComponent = { "out_AtomComponent", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlayLoop3DSE_OutAtomComponent_Parms, out_AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_out_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_out_AtomComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlayLoop3DSE_OutAtomComponent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_InCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_inMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_out_AtomComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "PlayLoop3DSE_OutAtomComponent", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlayLoop3DSE_OutAtomComponent_Parms), Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics
	{
		struct ELSSSoundManager_eventPlaySE_Damage_Parms
		{
			ESSDamageSE inDamageSE;
			UMeshComponent* inMeshComponent;
			bool inPlay2D;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inDamageSE_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inDamageSE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComponent;
		static void NewProp_inPlay2D_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inPlay2D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inDamageSE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inDamageSE = { "inDamageSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlaySE_Damage_Parms, inDamageSE), Z_Construct_UEnum_ABP_200508_ESSDamageSE, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inMeshComponent = { "inMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlaySE_Damage_Parms, inMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inMeshComponent_MetaData)) };
	void Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inPlay2D_SetBit(void* Obj)
	{
		((ELSSSoundManager_eventPlaySE_Damage_Parms*)Obj)->inPlay2D = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inPlay2D = { "inPlay2D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSoundManager_eventPlaySE_Damage_Parms), &Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inPlay2D_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inDamageSE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inDamageSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::NewProp_inPlay2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "PlaySE_Damage", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlaySE_Damage_Parms), Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics
	{
		struct ELSSSoundManager_eventPlaySE_HitGround_Parms
		{
			ESSHitGroundSE inHitGroundSE;
			UMeshComponent* inMeshComponent;
			bool inPlay2D;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inHitGroundSE_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inHitGroundSE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComponent;
		static void NewProp_inPlay2D_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inPlay2D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inHitGroundSE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inHitGroundSE = { "inHitGroundSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlaySE_HitGround_Parms, inHitGroundSE), Z_Construct_UEnum_ABP_200508_ESSHitGroundSE, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inMeshComponent = { "inMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlaySE_HitGround_Parms, inMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inMeshComponent_MetaData)) };
	void Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inPlay2D_SetBit(void* Obj)
	{
		((ELSSSoundManager_eventPlaySE_HitGround_Parms*)Obj)->inPlay2D = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inPlay2D = { "inPlay2D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSoundManager_eventPlaySE_HitGround_Parms), &Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inPlay2D_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inHitGroundSE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inHitGroundSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::NewProp_inPlay2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "PlaySE_HitGround", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlaySE_HitGround_Parms), Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics
	{
		struct ELSSSoundManager_eventPlaySE_SpawnPickup_Parms
		{
			ESSSpawnPickupSE inSpawnPickupSE;
			UMeshComponent* inMeshComponent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inSpawnPickupSE_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inSpawnPickupSE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::NewProp_inSpawnPickupSE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::NewProp_inSpawnPickupSE = { "inSpawnPickupSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlaySE_SpawnPickup_Parms, inSpawnPickupSE), Z_Construct_UEnum_ABP_200508_ESSSpawnPickupSE, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::NewProp_inMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::NewProp_inMeshComponent = { "inMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventPlaySE_SpawnPickup_Parms, inMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::NewProp_inMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::NewProp_inMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::NewProp_inSpawnPickupSE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::NewProp_inSpawnPickupSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::NewProp_inMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "PlaySE_SpawnPickup", nullptr, nullptr, sizeof(ELSSSoundManager_eventPlaySE_SpawnPickup_Parms), Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_RequestLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_RequestLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_RequestLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "RequestLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_RequestLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_RequestLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_RequestLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_RequestLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_loopSEUniqueId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics::NewProp_loopSEUniqueId = { "loopSEUniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundManager_eventStopLoopSE_Parms, loopSEUniqueId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics::NewProp_loopSEUniqueId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSoundManager, nullptr, "StopLoopSE", nullptr, nullptr, sizeof(ELSSSoundManager_eventStopLoopSE_Parms), Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSoundManager_StopLoopSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSoundManager_StopLoopSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSSoundManager_NoRegister()
	{
		return AELSSSoundManager::StaticClass();
	}
	struct Z_Construct_UClass_AELSSSoundManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopSEUniqueIdGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopSEUniqueIdGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundDataSoftClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SoundDataSoftClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIsLoadCompleted_MetaData[];
#endif
		static void NewProp_StatusIsLoadCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StatusIsLoadCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSSoundManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSSoundManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSSoundManager_CompleteLoading, "CompleteLoading" }, // 3417438380
		{ &Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_Damage, "GetSoundAtomCue_Damage" }, // 3165059737
		{ &Z_Construct_UFunction_AELSSSoundManager_GetSoundAtomCue_HitGround, "GetSoundAtomCue_HitGround" }, // 3957108600
		{ &Z_Construct_UFunction_AELSSSoundManager_IsLoadCompleted, "IsLoadCompleted" }, // 1394422346
		{ &Z_Construct_UFunction_AELSSSoundManager_LoadImpl, "LoadImpl" }, // 919872552
		{ &Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForCueEvent, "Play2DSE_ForCueEvent" }, // 1800960690
		{ &Z_Construct_UFunction_AELSSSoundManager_Play2DSE_ForString, "Play2DSE_ForString" }, // 2951991431
		{ &Z_Construct_UFunction_AELSSSoundManager_Play3DSE, "Play3DSE" }, // 2097886653
		{ &Z_Construct_UFunction_AELSSSoundManager_Play3DSEAtLocation_ForString, "Play3DSEAtLocation_ForString" }, // 2774718832
		{ &Z_Construct_UFunction_AELSSSoundManager_Play3DSEAttached_ForString, "Play3DSEAttached_ForString" }, // 3848951822
		{ &Z_Construct_UFunction_AELSSSoundManager_PlayAnnounce, "PlayAnnounce" }, // 3160355143
		{ &Z_Construct_UFunction_AELSSSoundManager_PlayLoop2DSE, "PlayLoop2DSE" }, // 1066853270
		{ &Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE, "PlayLoop3DSE" }, // 1478418445
		{ &Z_Construct_UFunction_AELSSSoundManager_PlayLoop3DSE_OutAtomComponent, "PlayLoop3DSE_OutAtomComponent" }, // 2573897948
		{ &Z_Construct_UFunction_AELSSSoundManager_PlaySE_Damage, "PlaySE_Damage" }, // 4178377519
		{ &Z_Construct_UFunction_AELSSSoundManager_PlaySE_HitGround, "PlaySE_HitGround" }, // 2503446893
		{ &Z_Construct_UFunction_AELSSSoundManager_PlaySE_SpawnPickup, "PlaySE_SpawnPickup" }, // 1894577200
		{ &Z_Construct_UFunction_AELSSSoundManager_RequestLoad, "RequestLoad" }, // 2272335486
		{ &Z_Construct_UFunction_AELSSSoundManager_StopLoopSE, "StopLoopSE" }, // 2031599308
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSoundManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSSoundManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_LoopSEUniqueIdGenerator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSoundManager" },
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_LoopSEUniqueIdGenerator = { "LoopSEUniqueIdGenerator", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSoundManager, LoopSEUniqueIdGenerator), METADATA_PARAMS(Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_LoopSEUniqueIdGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_LoopSEUniqueIdGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_SoundData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSoundManager" },
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_SoundData = { "SoundData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSoundManager, SoundData), Z_Construct_UClass_UELSSSoundData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_SoundData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_SoundData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_SoundDataSoftClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSoundManager" },
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_SoundDataSoftClass = { "SoundDataSoftClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSoundManager, SoundDataSoftClass), Z_Construct_UClass_UELSSSoundData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_SoundDataSoftClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_SoundDataSoftClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_StatusIsLoadCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSoundManager" },
		{ "ModuleRelativePath", "Public/ELSSSoundManager.h" },
	};
#endif
	void Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_StatusIsLoadCompleted_SetBit(void* Obj)
	{
		((AELSSSoundManager*)Obj)->StatusIsLoadCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_StatusIsLoadCompleted = { "StatusIsLoadCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSSoundManager), &Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_StatusIsLoadCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_StatusIsLoadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_StatusIsLoadCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSSoundManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_LoopSEUniqueIdGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_SoundData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_SoundDataSoftClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSoundManager_Statics::NewProp_StatusIsLoadCompleted,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSSoundManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSManagerActorInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSSoundManager, IELSSManagerActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSSoundManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSSoundManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSSoundManager_Statics::ClassParams = {
		&AELSSSoundManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSSoundManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSoundManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSSoundManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSoundManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSSoundManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSSoundManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSSoundManager, 496420852);
	template<> ABP_200508_API UClass* StaticClass<AELSSSoundManager>()
	{
		return AELSSSoundManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSSoundManager(Z_Construct_UClass_AELSSSoundManager, &AELSSSoundManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSSoundManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSSoundManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
