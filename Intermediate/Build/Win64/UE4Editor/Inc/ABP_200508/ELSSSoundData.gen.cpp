// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSoundData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSoundData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSSoundData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSSoundData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageSE();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHitGroundSE();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSSpawnPickupSE();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAnnounce();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDamageSEData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRarity();
// End Cross Module References
	DEFINE_FUNCTION(UELSSSoundData::execGetSoundAtomCue_Damage)
	{
		P_GET_ENUM(ESSDamageSE,Z_Param_inDamageSE);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetSoundAtomCue_Damage_Implementation(ESSDamageSE(Z_Param_inDamageSE));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSoundData::execGetSoundAtomCue_SpawnPickup)
	{
		P_GET_ENUM(ESSSpawnPickupSE,Z_Param_inPickupSE);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetSoundAtomCue_SpawnPickup(ESSSpawnPickupSE(Z_Param_inPickupSE));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSoundData::execInitialize)
	{
		P_GET_OBJECT(AActor,Z_Param_inOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_inOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSoundData::execSetOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_inOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwner(Z_Param_inOwner);
		P_NATIVE_END;
	}
	static FName NAME_UELSSSoundData_GetSoundAtomCue_Damage = FName(TEXT("GetSoundAtomCue_Damage"));
	USoundAtomCue* UELSSSoundData::GetSoundAtomCue_Damage(ESSDamageSE inDamageSE) const
	{
		ELSSSoundData_eventGetSoundAtomCue_Damage_Parms Parms;
		Parms.inDamageSE=inDamageSE;
		const_cast<UELSSSoundData*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSSoundData_GetSoundAtomCue_Damage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSSoundData_GetSoundAtomCue_HitGround = FName(TEXT("GetSoundAtomCue_HitGround"));
	USoundAtomCue* UELSSSoundData::GetSoundAtomCue_HitGround(ESSHitGroundSE inHitGroundSE, UMeshComponent* inMeshComponent) const
	{
		ELSSSoundData_eventGetSoundAtomCue_HitGround_Parms Parms;
		Parms.inHitGroundSE=inHitGroundSE;
		Parms.inMeshComponent=inMeshComponent;
		const_cast<UELSSSoundData*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSSoundData_GetSoundAtomCue_HitGround),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSSoundData_PlayAnnounce = FName(TEXT("PlayAnnounce"));
	void UELSSSoundData::PlayAnnounce(ESSAnnounce inAnnounce)
	{
		ELSSSoundData_eventPlayAnnounce_Parms Parms;
		Parms.inAnnounce=inAnnounce;
		ProcessEvent(FindFunctionChecked(NAME_UELSSSoundData_PlayAnnounce),&Parms);
	}
	void UELSSSoundData::StaticRegisterNativesUELSSSoundData()
	{
		UClass* Class = UELSSSoundData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSoundAtomCue_Damage", &UELSSSoundData::execGetSoundAtomCue_Damage },
			{ "GetSoundAtomCue_SpawnPickup", &UELSSSoundData::execGetSoundAtomCue_SpawnPickup },
			{ "Initialize", &UELSSSoundData::execInitialize },
			{ "SetOwner", &UELSSSoundData::execSetOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::NewProp_inDamageSE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::NewProp_inDamageSE = { "inDamageSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundData_eventGetSoundAtomCue_Damage_Parms, inDamageSE), Z_Construct_UEnum_ABP_200508_ESSDamageSE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundData_eventGetSoundAtomCue_Damage_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::NewProp_inDamageSE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::NewProp_inDamageSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSoundData, nullptr, "GetSoundAtomCue_Damage", nullptr, nullptr, sizeof(ELSSSoundData_eventGetSoundAtomCue_Damage_Parms), Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_inHitGroundSE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_inHitGroundSE = { "inHitGroundSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundData_eventGetSoundAtomCue_HitGround_Parms, inHitGroundSE), Z_Construct_UEnum_ABP_200508_ESSHitGroundSE, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_inMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_inMeshComponent = { "inMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundData_eventGetSoundAtomCue_HitGround_Parms, inMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_inMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_inMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundData_eventGetSoundAtomCue_HitGround_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_inHitGroundSE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_inHitGroundSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_inMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSoundData, nullptr, "GetSoundAtomCue_HitGround", nullptr, nullptr, sizeof(ELSSSoundData_eventGetSoundAtomCue_HitGround_Parms), Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics
	{
		struct ELSSSoundData_eventGetSoundAtomCue_SpawnPickup_Parms
		{
			ESSSpawnPickupSE inPickupSE;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inPickupSE_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inPickupSE;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::NewProp_inPickupSE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::NewProp_inPickupSE = { "inPickupSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundData_eventGetSoundAtomCue_SpawnPickup_Parms, inPickupSE), Z_Construct_UEnum_ABP_200508_ESSSpawnPickupSE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundData_eventGetSoundAtomCue_SpawnPickup_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::NewProp_inPickupSE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::NewProp_inPickupSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSoundData, nullptr, "GetSoundAtomCue_SpawnPickup", nullptr, nullptr, sizeof(ELSSSoundData_eventGetSoundAtomCue_SpawnPickup_Parms), Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSoundData_Initialize_Statics
	{
		struct ELSSSoundData_eventInitialize_Parms
		{
			AActor* inOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSoundData_Initialize_Statics::NewProp_inOwner = { "inOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundData_eventInitialize_Parms, inOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSoundData_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_Initialize_Statics::NewProp_inOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSoundData_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSoundData_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSoundData, nullptr, "Initialize", nullptr, nullptr, sizeof(ELSSSoundData_eventInitialize_Parms), Z_Construct_UFunction_UELSSSoundData_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSoundData_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSoundData_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSoundData_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inAnnounce_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inAnnounce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::NewProp_inAnnounce_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::NewProp_inAnnounce = { "inAnnounce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundData_eventPlayAnnounce_Parms, inAnnounce), Z_Construct_UEnum_ABP_200508_ESSAnnounce, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::NewProp_inAnnounce_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::NewProp_inAnnounce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSoundData, nullptr, "PlayAnnounce", nullptr, nullptr, sizeof(ELSSSoundData_eventPlayAnnounce_Parms), Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSoundData_PlayAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSoundData_PlayAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics
	{
		struct ELSSSoundData_eventSetOwner_Parms
		{
			AActor* inOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics::NewProp_inOwner = { "inOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSoundData_eventSetOwner_Parms, inOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics::NewProp_inOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSoundData, nullptr, "SetOwner", nullptr, nullptr, sizeof(ELSSSoundData_eventSetOwner_Parms), Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSoundData_SetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSoundData_SetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSSoundData_NoRegister()
	{
		return UELSSSoundData::StaticClass();
	}
	struct Z_Construct_UClass_UELSSSoundData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageSEDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageSEDataTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageSEDataMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageSEDataMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageSEDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageSEDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DamageSEDataMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPickupSE_Default_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnPickupSE_Default_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnPickupSE_Default_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupSE_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpawnPickupSE_Default;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPickupSE_ExpItem_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnPickupSE_ExpItem_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnPickupSE_ExpItem_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupSE_ExpItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpawnPickupSE_ExpItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPickupSEAtomCue_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnPickupSEAtomCue_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnPickupSEAtomCue_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupSEAtomCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpawnPickupSEAtomCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSSoundData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSSoundData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_Damage, "GetSoundAtomCue_Damage" }, // 467644038
		{ &Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_HitGround, "GetSoundAtomCue_HitGround" }, // 3066270746
		{ &Z_Construct_UFunction_UELSSSoundData_GetSoundAtomCue_SpawnPickup, "GetSoundAtomCue_SpawnPickup" }, // 4234173106
		{ &Z_Construct_UFunction_UELSSSoundData_Initialize, "Initialize" }, // 1289281673
		{ &Z_Construct_UFunction_UELSSSoundData_PlayAnnounce, "PlayAnnounce" }, // 209246393
		{ &Z_Construct_UFunction_UELSSSoundData_SetOwner, "SetOwner" }, // 2358179994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSoundData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSSoundData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSoundData" },
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataTable = { "DamageSEDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSSoundData, DamageSEDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap_ValueProp = { "DamageSEDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSSDamageSEData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap_Key_KeyProp = { "DamageSEDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSDamageSE, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSoundData" },
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap = { "DamageSEDataMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSSoundData, DamageSEDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default_ValueProp = { "SpawnPickupSE_Default", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default_Key_KeyProp = { "SpawnPickupSE_Default_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSoundData" },
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default = { "SpawnPickupSE_Default", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSSoundData, SpawnPickupSE_Default), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem_ValueProp = { "SpawnPickupSE_ExpItem", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem_Key_KeyProp = { "SpawnPickupSE_ExpItem_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSoundData" },
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem = { "SpawnPickupSE_ExpItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSSoundData, SpawnPickupSE_ExpItem), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue_ValueProp = { "SpawnPickupSEAtomCue", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue_Key_KeyProp = { "SpawnPickupSEAtomCue_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSSpawnPickupSE, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSoundData" },
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue = { "SpawnPickupSEAtomCue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSSoundData, SpawnPickupSEAtomCue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSoundData_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSoundData" },
		{ "ModuleRelativePath", "Public/ELSSSoundData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSSoundData_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSSoundData, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_OwnerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSoundData_Statics::NewProp_OwnerActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSSoundData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_DamageSEDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSE_ExpItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_SpawnPickupSEAtomCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSSoundData_Statics::NewProp_OwnerActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSSoundData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSSoundData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSSoundData_Statics::ClassParams = {
		&UELSSSoundData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSSoundData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSoundData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSSoundData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSoundData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSSoundData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSSoundData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSSoundData, 1626707378);
	template<> ABP_200508_API UClass* StaticClass<UELSSSoundData>()
	{
		return UELSSSoundData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSSoundData(Z_Construct_UClass_UELSSSoundData, &UELSSSoundData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSSoundData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSSoundData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
