// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSItemManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSItemManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSItemBoxType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemBox_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSSpawnItemCategory();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRarity();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSRoundParam();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocator_ItemBox_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemBoxSpawnParamForRound();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSSpawnPickupReason();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSShieldBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMasterData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotRarityParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemBoxParam();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPickupBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSManagerActorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSItemManager::execCalcAbilityItemBoxLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_inOriginLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_inOriginRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->CalcAbilityItemBoxLocation_Implementation(Z_Param_Out_inOriginLocation,Z_Param_Out_inOriginRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execCalcLaunchVelocity)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_inBaseRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inVelocityXY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inVelocityZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalcLaunchVelocity(Z_Param_Out_inBaseRotation,Z_Param_inVelocityXY,Z_Param_inVelocityZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execCalcScatterLaunchVelocity)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_inBaseRotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSpawnNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSpawnIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inVelocityXY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inVelocityZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalcScatterLaunchVelocity(Z_Param_Out_inBaseRotation,Z_Param_inSpawnNum,Z_Param_inSpawnIndex,Z_Param_inVelocityXY,Z_Param_inVelocityZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execCalcScatterLaunchVelocityDefault)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_inBaseRotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSpawnNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSpawnIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalcScatterLaunchVelocityDefault(Z_Param_Out_inBaseRotation,Z_Param_inSpawnNum,Z_Param_inSpawnIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execGetPickupObjectClass)
	{
		P_GET_ENUM(ESSSpawnItemCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetPickupObjectClass(ESSSpawnItemCategory(Z_Param_inCategory),Z_Param_inDatabaseId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execIsLoadCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoadCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execLaunchPickupObject)
	{
		P_GET_OBJECT(AActor,Z_Param_inPickupObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inGravityScale);
		P_GET_UBOOL(Z_Param_inCanTouchImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LaunchPickupObject(Z_Param_inPickupObject,Z_Param_Out_InVelocity,Z_Param_inGravityScale,Z_Param_inCanTouchImmediate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execLoadAsyncItemClasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAsyncItemClasses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execLotItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inLotGroupID);
		P_GET_ENUM(ESSSpawnItemCategory,Z_Param_inCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LotItem(Z_Param_inLotGroupID,ESSSpawnItemCategory(Z_Param_inCategory));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execLotItemCategory)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inLotGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSSpawnItemCategory*)Z_Param__Result=P_THIS->LotItemCategory(Z_Param_inLotGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execLotRarity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inLotGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSRarity*)Z_Param__Result=P_THIS->LotRarity(Z_Param_inLotGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execLotSpawnNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inLotGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LotSpawnNum(Z_Param_inLotGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execLotSpawnNumByItemBoxType)
	{
		P_GET_ENUM(ESSItemBoxType,Z_Param_inItemBoxType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LotSpawnNumByItemBoxType(ESSItemBoxType(Z_Param_inItemBoxType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execLotWeapon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inLotGroupID);
		P_GET_ENUM(ESSRarity,Z_Param_inRarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LotWeapon(Z_Param_inLotGroupID,ESSRarity(Z_Param_inRarity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execOnBeginRound)
	{
		P_GET_STRUCT_REF(FSSRoundParam,Z_Param_Out_inRoundParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginRound(Z_Param_Out_inRoundParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execOnEndRound)
	{
		P_GET_STRUCT_REF(FSSRoundParam,Z_Param_Out_inRoundParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndRound(Z_Param_Out_inRoundParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execOnTickRound)
	{
		P_GET_STRUCT_REF(FSSRoundParam,Z_Param_Out_inRoundParam);
		P_GET_PROPERTY(FFloatProperty,Z_Param_newRoundTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_prevRoundTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickRound(Z_Param_Out_inRoundParam,Z_Param_newRoundTime,Z_Param_prevRoundTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execSpawnExpItemFromAttention)
	{
		P_GET_OBJECT(AActor,Z_Param_inPlayerActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_inExpItemLotGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnExpItemFromAttention(Z_Param_inPlayerActor,Z_Param_inExpItemLotGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execSpawnItemBox)
	{
		P_GET_ENUM(ESSItemBoxType,Z_Param_InType);
		P_GET_OBJECT(AELSSLocator_ItemBox,Z_Param_inLocator);
		P_GET_UBOOL(Z_Param_inSkipAnim);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SpawnItemBox(ESSItemBoxType(Z_Param_InType),Z_Param_inLocator,Z_Param_inSkipAnim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execSpawnItemBoxFromAbility)
	{
		P_GET_ENUM(ESSItemBoxType,Z_Param_InType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnItemBoxFromAbility(ESSItemBoxType(Z_Param_InType),Z_Param_Out_InLocation,Z_Param_Out_InRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execSpawnItemBoxFromRound)
	{
		P_GET_STRUCT_REF(FSSItemBoxSpawnParamForRound,Z_Param_Out_inSpawnParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnItemBoxFromRound(Z_Param_Out_inSpawnParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execSpawnPickupItemObject)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
		P_GET_ENUM(ESSSpawnPickupReason,Z_Param_inReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnPickupItemObject(Z_Param_inDatabaseId,Z_Param_Out_InLocation,Z_Param_Out_InRotation,ESSSpawnPickupReason(Z_Param_inReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execSpawnPickupObjectsFromItemBox)
	{
		P_GET_ENUM(ESSItemBoxType,Z_Param_inItemBoxType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->SpawnPickupObjectsFromItemBox(ESSItemBoxType(Z_Param_inItemBoxType),Z_Param_Out_InLocation,Z_Param_Out_InRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execSpawnPickupShieldObject)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
		P_GET_ENUM(ESSSpawnPickupReason,Z_Param_inReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnPickupShieldObject(Z_Param_inDatabaseId,Z_Param_Out_InLocation,Z_Param_Out_InRotation,ESSSpawnPickupReason(Z_Param_inReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execSpawnPickupWeaponObject)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
		P_GET_ENUM(ESSSpawnPickupReason,Z_Param_inReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnPickupWeaponObject(Z_Param_inDatabaseId,Z_Param_Out_InLocation,Z_Param_Out_InRotation,ESSSpawnPickupReason(Z_Param_inReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemManager::execSpawnSpecifiedNumFromItemBox)
	{
		P_GET_ENUM(ESSItemBoxType,Z_Param_inItemBoxType);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSpawnNum);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->SpawnSpecifiedNumFromItemBox(ESSItemBoxType(Z_Param_inItemBoxType),Z_Param_inSpawnNum,Z_Param_Out_InLocation,Z_Param_Out_InRotation);
		P_NATIVE_END;
	}
	static FName NAME_AELSSItemManager_CalcAbilityItemBoxLocation = FName(TEXT("CalcAbilityItemBoxLocation"));
	FTransform AELSSItemManager::CalcAbilityItemBoxLocation(FVector const& inOriginLocation, FRotator const& inOriginRotation)
	{
		ELSSItemManager_eventCalcAbilityItemBoxLocation_Parms Parms;
		Parms.inOriginLocation=inOriginLocation;
		Parms.inOriginRotation=inOriginRotation;
		ProcessEvent(FindFunctionChecked(NAME_AELSSItemManager_CalcAbilityItemBoxLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSItemManager_GetItemBoxClass = FName(TEXT("GetItemBoxClass"));
	TSubclassOf<AELSSItemBox>  AELSSItemManager::GetItemBoxClass(ESSItemBoxType InType) const
	{
		ELSSItemManager_eventGetItemBoxClass_Parms Parms;
		Parms.InType=InType;
		const_cast<AELSSItemManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSItemManager_GetItemBoxClass),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSItemManager_InitializeItemBoxSpawnParam = FName(TEXT("InitializeItemBoxSpawnParam"));
	void AELSSItemManager::InitializeItemBoxSpawnParam()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSItemManager_InitializeItemBoxSpawnParam),NULL);
	}
	void AELSSItemManager::StaticRegisterNativesAELSSItemManager()
	{
		UClass* Class = AELSSItemManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcAbilityItemBoxLocation", &AELSSItemManager::execCalcAbilityItemBoxLocation },
			{ "CalcLaunchVelocity", &AELSSItemManager::execCalcLaunchVelocity },
			{ "CalcScatterLaunchVelocity", &AELSSItemManager::execCalcScatterLaunchVelocity },
			{ "CalcScatterLaunchVelocityDefault", &AELSSItemManager::execCalcScatterLaunchVelocityDefault },
			{ "GetPickupObjectClass", &AELSSItemManager::execGetPickupObjectClass },
			{ "IsLoadCompleted", &AELSSItemManager::execIsLoadCompleted },
			{ "LaunchPickupObject", &AELSSItemManager::execLaunchPickupObject },
			{ "LoadAsyncItemClasses", &AELSSItemManager::execLoadAsyncItemClasses },
			{ "LotItem", &AELSSItemManager::execLotItem },
			{ "LotItemCategory", &AELSSItemManager::execLotItemCategory },
			{ "LotRarity", &AELSSItemManager::execLotRarity },
			{ "LotSpawnNum", &AELSSItemManager::execLotSpawnNum },
			{ "LotSpawnNumByItemBoxType", &AELSSItemManager::execLotSpawnNumByItemBoxType },
			{ "LotWeapon", &AELSSItemManager::execLotWeapon },
			{ "OnBeginRound", &AELSSItemManager::execOnBeginRound },
			{ "OnEndRound", &AELSSItemManager::execOnEndRound },
			{ "OnTickRound", &AELSSItemManager::execOnTickRound },
			{ "SpawnExpItemFromAttention", &AELSSItemManager::execSpawnExpItemFromAttention },
			{ "SpawnItemBox", &AELSSItemManager::execSpawnItemBox },
			{ "SpawnItemBoxFromAbility", &AELSSItemManager::execSpawnItemBoxFromAbility },
			{ "SpawnItemBoxFromRound", &AELSSItemManager::execSpawnItemBoxFromRound },
			{ "SpawnPickupItemObject", &AELSSItemManager::execSpawnPickupItemObject },
			{ "SpawnPickupObjectsFromItemBox", &AELSSItemManager::execSpawnPickupObjectsFromItemBox },
			{ "SpawnPickupShieldObject", &AELSSItemManager::execSpawnPickupShieldObject },
			{ "SpawnPickupWeaponObject", &AELSSItemManager::execSpawnPickupWeaponObject },
			{ "SpawnSpecifiedNumFromItemBox", &AELSSItemManager::execSpawnSpecifiedNumFromItemBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inOriginLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inOriginLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inOriginRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inOriginRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_inOriginLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_inOriginLocation = { "inOriginLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcAbilityItemBoxLocation_Parms, inOriginLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_inOriginLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_inOriginLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_inOriginRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_inOriginRotation = { "inOriginRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcAbilityItemBoxLocation_Parms, inOriginRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_inOriginRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_inOriginRotation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcAbilityItemBoxLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_inOriginLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_inOriginRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "CalcAbilityItemBoxLocation", nullptr, nullptr, sizeof(ELSSItemManager_eventCalcAbilityItemBoxLocation_Parms), Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics
	{
		struct ELSSItemManager_eventCalcLaunchVelocity_Parms
		{
			FRotator inBaseRotation;
			float inVelocityXY;
			float inVelocityZ;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inBaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inBaseRotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inVelocityXY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inVelocityZ;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_inBaseRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_inBaseRotation = { "inBaseRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcLaunchVelocity_Parms, inBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_inBaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_inBaseRotation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_inVelocityXY = { "inVelocityXY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcLaunchVelocity_Parms, inVelocityXY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_inVelocityZ = { "inVelocityZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcLaunchVelocity_Parms, inVelocityZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcLaunchVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_inBaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_inVelocityXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_inVelocityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "CalcLaunchVelocity", nullptr, nullptr, sizeof(ELSSItemManager_eventCalcLaunchVelocity_Parms), Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics
	{
		struct ELSSItemManager_eventCalcScatterLaunchVelocity_Parms
		{
			FRotator inBaseRotation;
			int32 inSpawnNum;
			int32 inSpawnIndex;
			float inVelocityXY;
			float inVelocityZ;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inBaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inBaseRotation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSpawnNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSpawnIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inVelocityXY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inVelocityZ;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inBaseRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inBaseRotation = { "inBaseRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcScatterLaunchVelocity_Parms, inBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inBaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inBaseRotation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inSpawnNum = { "inSpawnNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcScatterLaunchVelocity_Parms, inSpawnNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inSpawnIndex = { "inSpawnIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcScatterLaunchVelocity_Parms, inSpawnIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inVelocityXY = { "inVelocityXY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcScatterLaunchVelocity_Parms, inVelocityXY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inVelocityZ = { "inVelocityZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcScatterLaunchVelocity_Parms, inVelocityZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcScatterLaunchVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inBaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inSpawnNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inSpawnIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inVelocityXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_inVelocityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "CalcScatterLaunchVelocity", nullptr, nullptr, sizeof(ELSSItemManager_eventCalcScatterLaunchVelocity_Parms), Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics
	{
		struct ELSSItemManager_eventCalcScatterLaunchVelocityDefault_Parms
		{
			FRotator inBaseRotation;
			int32 inSpawnNum;
			int32 inSpawnIndex;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inBaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inBaseRotation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSpawnNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSpawnIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_inBaseRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_inBaseRotation = { "inBaseRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcScatterLaunchVelocityDefault_Parms, inBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_inBaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_inBaseRotation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_inSpawnNum = { "inSpawnNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcScatterLaunchVelocityDefault_Parms, inSpawnNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_inSpawnIndex = { "inSpawnIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcScatterLaunchVelocityDefault_Parms, inSpawnIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventCalcScatterLaunchVelocityDefault_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_inBaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_inSpawnNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_inSpawnIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "CalcScatterLaunchVelocityDefault", nullptr, nullptr, sizeof(ELSSItemManager_eventCalcScatterLaunchVelocityDefault_Parms), Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventGetItemBoxClass_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventGetItemBoxClass_Parms, ReturnValue), Z_Construct_UClass_AELSSItemBox_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "GetItemBoxClass", nullptr, nullptr, sizeof(ELSSItemManager_eventGetItemBoxClass_Parms), Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics
	{
		struct ELSSItemManager_eventGetPickupObjectClass_Parms
		{
			ESSSpawnItemCategory inCategory;
			int32 inDatabaseId;
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventGetPickupObjectClass_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSSpawnItemCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventGetPickupObjectClass_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventGetPickupObjectClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "GetPickupObjectClass", nullptr, nullptr, sizeof(ELSSItemManager_eventGetPickupObjectClass_Parms), Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_InitializeItemBoxSpawnParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_InitializeItemBoxSpawnParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_InitializeItemBoxSpawnParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "InitializeItemBoxSpawnParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_InitializeItemBoxSpawnParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_InitializeItemBoxSpawnParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_InitializeItemBoxSpawnParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_InitializeItemBoxSpawnParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics
	{
		struct ELSSItemManager_eventIsLoadCompleted_Parms
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
	void Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSItemManager_eventIsLoadCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemManager_eventIsLoadCompleted_Parms), &Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "IsLoadCompleted", nullptr, nullptr, sizeof(ELSSItemManager_eventIsLoadCompleted_Parms), Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics
	{
		struct ELSSItemManager_eventLaunchPickupObject_Parms
		{
			AActor* inPickupObject;
			FVector InVelocity;
			float inGravityScale;
			bool inCanTouchImmediate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPickupObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inGravityScale;
		static void NewProp_inCanTouchImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inCanTouchImmediate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_inPickupObject = { "inPickupObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLaunchPickupObject_Parms, inPickupObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_InVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLaunchPickupObject_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_InVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_InVelocity_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_inGravityScale = { "inGravityScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLaunchPickupObject_Parms, inGravityScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_inCanTouchImmediate_SetBit(void* Obj)
	{
		((ELSSItemManager_eventLaunchPickupObject_Parms*)Obj)->inCanTouchImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_inCanTouchImmediate = { "inCanTouchImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemManager_eventLaunchPickupObject_Parms), &Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_inCanTouchImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_inPickupObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_InVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_inGravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::NewProp_inCanTouchImmediate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "LaunchPickupObject", nullptr, nullptr, sizeof(ELSSItemManager_eventLaunchPickupObject_Parms), Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_LoadAsyncItemClasses_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_LoadAsyncItemClasses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_LoadAsyncItemClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "LoadAsyncItemClasses", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_LoadAsyncItemClasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LoadAsyncItemClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_LoadAsyncItemClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_LoadAsyncItemClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_LotItem_Statics
	{
		struct ELSSItemManager_eventLotItem_Parms
		{
			int32 inLotGroupID;
			ESSSpawnItemCategory inCategory;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inLotGroupID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::NewProp_inLotGroupID = { "inLotGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotItem_Parms, inLotGroupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotItem_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSSpawnItemCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::NewProp_inLotGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "LotItem", nullptr, nullptr, sizeof(ELSSItemManager_eventLotItem_Parms), Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_LotItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_LotItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics
	{
		struct ELSSItemManager_eventLotItemCategory_Parms
		{
			int32 inLotGroupID;
			ESSSpawnItemCategory ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inLotGroupID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::NewProp_inLotGroupID = { "inLotGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotItemCategory_Parms, inLotGroupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotItemCategory_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSSpawnItemCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::NewProp_inLotGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "LotItemCategory", nullptr, nullptr, sizeof(ELSSItemManager_eventLotItemCategory_Parms), Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_LotItemCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_LotItemCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics
	{
		struct ELSSItemManager_eventLotRarity_Parms
		{
			int32 inLotGroupID;
			ESSRarity ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inLotGroupID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::NewProp_inLotGroupID = { "inLotGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotRarity_Parms, inLotGroupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotRarity_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::NewProp_inLotGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "LotRarity", nullptr, nullptr, sizeof(ELSSItemManager_eventLotRarity_Parms), Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_LotRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_LotRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics
	{
		struct ELSSItemManager_eventLotSpawnNum_Parms
		{
			int32 inLotGroupID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inLotGroupID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::NewProp_inLotGroupID = { "inLotGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotSpawnNum_Parms, inLotGroupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotSpawnNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::NewProp_inLotGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "LotSpawnNum", nullptr, nullptr, sizeof(ELSSItemManager_eventLotSpawnNum_Parms), Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_LotSpawnNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_LotSpawnNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics
	{
		struct ELSSItemManager_eventLotSpawnNumByItemBoxType_Parms
		{
			ESSItemBoxType inItemBoxType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inItemBoxType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inItemBoxType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::NewProp_inItemBoxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::NewProp_inItemBoxType = { "inItemBoxType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotSpawnNumByItemBoxType_Parms, inItemBoxType), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotSpawnNumByItemBoxType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::NewProp_inItemBoxType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::NewProp_inItemBoxType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "LotSpawnNumByItemBoxType", nullptr, nullptr, sizeof(ELSSItemManager_eventLotSpawnNumByItemBoxType_Parms), Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics
	{
		struct ELSSItemManager_eventLotWeapon_Parms
		{
			int32 inLotGroupID;
			ESSRarity inRarity;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inLotGroupID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inRarity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inRarity;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::NewProp_inLotGroupID = { "inLotGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotWeapon_Parms, inLotGroupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::NewProp_inRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::NewProp_inRarity = { "inRarity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotWeapon_Parms, inRarity), Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventLotWeapon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::NewProp_inLotGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::NewProp_inRarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::NewProp_inRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "LotWeapon", nullptr, nullptr, sizeof(ELSSItemManager_eventLotWeapon_Parms), Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_LotWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_LotWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics
	{
		struct ELSSItemManager_eventOnBeginRound_Parms
		{
			FSSRoundParam inRoundParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRoundParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRoundParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::NewProp_inRoundParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::NewProp_inRoundParam = { "inRoundParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventOnBeginRound_Parms, inRoundParam), Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::NewProp_inRoundParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::NewProp_inRoundParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::NewProp_inRoundParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "OnBeginRound", nullptr, nullptr, sizeof(ELSSItemManager_eventOnBeginRound_Parms), Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_OnBeginRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_OnBeginRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics
	{
		struct ELSSItemManager_eventOnEndRound_Parms
		{
			FSSRoundParam inRoundParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRoundParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRoundParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::NewProp_inRoundParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::NewProp_inRoundParam = { "inRoundParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventOnEndRound_Parms, inRoundParam), Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::NewProp_inRoundParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::NewProp_inRoundParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::NewProp_inRoundParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "OnEndRound", nullptr, nullptr, sizeof(ELSSItemManager_eventOnEndRound_Parms), Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_OnEndRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_OnEndRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics
	{
		struct ELSSItemManager_eventOnTickRound_Parms
		{
			FSSRoundParam inRoundParam;
			float newRoundTime;
			float prevRoundTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRoundParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRoundParam;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newRoundTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_prevRoundTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::NewProp_inRoundParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::NewProp_inRoundParam = { "inRoundParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventOnTickRound_Parms, inRoundParam), Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::NewProp_inRoundParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::NewProp_inRoundParam_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::NewProp_newRoundTime = { "newRoundTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventOnTickRound_Parms, newRoundTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::NewProp_prevRoundTime = { "prevRoundTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventOnTickRound_Parms, prevRoundTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::NewProp_inRoundParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::NewProp_newRoundTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::NewProp_prevRoundTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "OnTickRound", nullptr, nullptr, sizeof(ELSSItemManager_eventOnTickRound_Parms), Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_OnTickRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_OnTickRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics
	{
		struct ELSSItemManager_eventSpawnExpItemFromAttention_Parms
		{
			AActor* inPlayerActor;
			int32 inExpItemLotGroupID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayerActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inExpItemLotGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::NewProp_inPlayerActor = { "inPlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnExpItemFromAttention_Parms, inPlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::NewProp_inExpItemLotGroupID = { "inExpItemLotGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnExpItemFromAttention_Parms, inExpItemLotGroupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::NewProp_inPlayerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::NewProp_inExpItemLotGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "SpawnExpItemFromAttention", nullptr, nullptr, sizeof(ELSSItemManager_eventSpawnExpItemFromAttention_Parms), Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics
	{
		struct ELSSItemManager_eventSpawnItemBox_Parms
		{
			ESSItemBoxType InType;
			AELSSLocator_ItemBox* inLocator;
			bool inSkipAnim;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inLocator;
		static void NewProp_inSkipAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inSkipAnim;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnItemBox_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_inLocator = { "inLocator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnItemBox_Parms, inLocator), Z_Construct_UClass_AELSSLocator_ItemBox_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_inSkipAnim_SetBit(void* Obj)
	{
		((ELSSItemManager_eventSpawnItemBox_Parms*)Obj)->inSkipAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_inSkipAnim = { "inSkipAnim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemManager_eventSpawnItemBox_Parms), &Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_inSkipAnim_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSItemManager_eventSpawnItemBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemManager_eventSpawnItemBox_Parms), &Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_inLocator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_inSkipAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "SpawnItemBox", nullptr, nullptr, sizeof(ELSSItemManager_eventSpawnItemBox_Parms), Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_SpawnItemBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_SpawnItemBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics
	{
		struct ELSSItemManager_eventSpawnItemBoxFromAbility_Parms
		{
			ESSItemBoxType InType;
			FVector InLocation;
			FRotator InRotation;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnItemBoxFromAbility_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnItemBoxFromAbility_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnItemBoxFromAbility_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::NewProp_InRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "SpawnItemBoxFromAbility", nullptr, nullptr, sizeof(ELSSItemManager_eventSpawnItemBoxFromAbility_Parms), Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics
	{
		struct ELSSItemManager_eventSpawnItemBoxFromRound_Parms
		{
			FSSItemBoxSpawnParamForRound inSpawnParam;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inSpawnParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics::NewProp_inSpawnParam = { "inSpawnParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnItemBoxFromRound_Parms, inSpawnParam), Z_Construct_UScriptStruct_FSSItemBoxSpawnParamForRound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics::NewProp_inSpawnParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "SpawnItemBoxFromRound", nullptr, nullptr, sizeof(ELSSItemManager_eventSpawnItemBoxFromRound_Parms), Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics
	{
		struct ELSSItemManager_eventSpawnPickupItemObject_Parms
		{
			int32 inDatabaseId;
			FVector InLocation;
			FRotator InRotation;
			ESSSpawnPickupReason inReason;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupItemObject_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupItemObject_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupItemObject_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_InRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_InRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupItemObject_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSSpawnPickupReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupItemObject_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_inReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "SpawnPickupItemObject", nullptr, nullptr, sizeof(ELSSItemManager_eventSpawnPickupItemObject_Parms), Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics
	{
		struct ELSSItemManager_eventSpawnPickupObjectsFromItemBox_Parms
		{
			ESSItemBoxType inItemBoxType;
			FVector InLocation;
			FRotator InRotation;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inItemBoxType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inItemBoxType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_inItemBoxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_inItemBoxType = { "inItemBoxType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupObjectsFromItemBox_Parms, inItemBoxType), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupObjectsFromItemBox_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupObjectsFromItemBox_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_InRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_InRotation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupObjectsFromItemBox_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_inItemBoxType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_inItemBoxType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "SpawnPickupObjectsFromItemBox", nullptr, nullptr, sizeof(ELSSItemManager_eventSpawnPickupObjectsFromItemBox_Parms), Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics
	{
		struct ELSSItemManager_eventSpawnPickupShieldObject_Parms
		{
			int32 inDatabaseId;
			FVector InLocation;
			FRotator InRotation;
			ESSSpawnPickupReason inReason;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupShieldObject_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupShieldObject_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupShieldObject_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_InRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_InRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupShieldObject_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSSpawnPickupReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupShieldObject_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_inReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "SpawnPickupShieldObject", nullptr, nullptr, sizeof(ELSSItemManager_eventSpawnPickupShieldObject_Parms), Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics
	{
		struct ELSSItemManager_eventSpawnPickupWeaponObject_Parms
		{
			int32 inDatabaseId;
			FVector InLocation;
			FRotator InRotation;
			ESSSpawnPickupReason inReason;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupWeaponObject_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupWeaponObject_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupWeaponObject_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_InRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_InRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupWeaponObject_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSSpawnPickupReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnPickupWeaponObject_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_inReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "SpawnPickupWeaponObject", nullptr, nullptr, sizeof(ELSSItemManager_eventSpawnPickupWeaponObject_Parms), Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics
	{
		struct ELSSItemManager_eventSpawnSpecifiedNumFromItemBox_Parms
		{
			ESSItemBoxType inItemBoxType;
			int32 inSpawnNum;
			FVector InLocation;
			FRotator InRotation;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inItemBoxType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inItemBoxType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSpawnNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_inItemBoxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_inItemBoxType = { "inItemBoxType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnSpecifiedNumFromItemBox_Parms, inItemBoxType), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_inSpawnNum = { "inSpawnNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnSpecifiedNumFromItemBox_Parms, inSpawnNum), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnSpecifiedNumFromItemBox_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnSpecifiedNumFromItemBox_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_InRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_InRotation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemManager_eventSpawnSpecifiedNumFromItemBox_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_inItemBoxType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_inItemBoxType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_inSpawnNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemManager, nullptr, "SpawnSpecifiedNumFromItemBox", nullptr, nullptr, sizeof(ELSSItemManager_eventSpawnSpecifiedNumFromItemBox_Parms), Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSItemManager_NoRegister()
	{
		return AELSSItemManager::StaticClass();
	}
	struct Z_Construct_UClass_AELSSItemManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionExpItem_SpawnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttentionExpItem_SpawnOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionExpItem_SpawnVelocityXY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttentionExpItem_SpawnVelocityXY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionExpItem_SpawnVelocityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttentionExpItem_SpawnVelocityZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionExpItem_GravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttentionExpItem_GravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMeleeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponMeleeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponGunClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponGunClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponThrowClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponThrowClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTrapClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponTrapClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShieldClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnVelocityXY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultSpawnVelocityXY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnVelocityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultSpawnVelocityZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultGravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupCanTouchReservedTime_Attention_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickupCanTouchReservedTime_Attention;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupCanTouchReservedTime_Gimmick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickupCanTouchReservedTime_Gimmick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupCanTouchReservedTime_ItemBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickupCanTouchReservedTime_ItemBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExcludedPikcup_HpItem_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedPikcup_HpItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedPikcup_HpItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExcludedPikcup_ExpItem_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedPikcup_ExpItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedPikcup_ExpItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExcludedPikcup_ShieldItem_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedPikcup_ShieldItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedPikcup_ShieldItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExcludedPikcup_OtherItem_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedPikcup_OtherItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedPikcup_OtherItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExcludedPikcup_Weapon_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedPikcup_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedPikcup_Weapon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemBoxSpawnParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBoxSpawnParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemBoxSpawnParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotRarityParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LotRarityParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LotRarityParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotRarityParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LotRarityParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBoxParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBoxParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemBoxParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBoxParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemBoxParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBoxItemSpawnVelocityXY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TreasureBoxItemSpawnVelocityXY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBoxItemSpawnVelocityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TreasureBoxItemSpawnVelocityZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBoxItemSpawnGravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TreasureBoxItemSpawnGravityScale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadRequestItemId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadRequestItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadRequestItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemptrtest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_itemptrtest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathtest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pathtest;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoadedItemClassMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadedItemClassMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedItemClassMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoadedItemClassMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidItemBoxList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidItemBoxList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidItemBoxList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidPickupList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidPickupList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidPickupList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidCarrotList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidCarrotList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidCarrotList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSItemManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSItemManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSItemManager_CalcAbilityItemBoxLocation, "CalcAbilityItemBoxLocation" }, // 3474671289
		{ &Z_Construct_UFunction_AELSSItemManager_CalcLaunchVelocity, "CalcLaunchVelocity" }, // 2212969366
		{ &Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocity, "CalcScatterLaunchVelocity" }, // 296775350
		{ &Z_Construct_UFunction_AELSSItemManager_CalcScatterLaunchVelocityDefault, "CalcScatterLaunchVelocityDefault" }, // 3326871378
		{ &Z_Construct_UFunction_AELSSItemManager_GetItemBoxClass, "GetItemBoxClass" }, // 272971865
		{ &Z_Construct_UFunction_AELSSItemManager_GetPickupObjectClass, "GetPickupObjectClass" }, // 3035751426
		{ &Z_Construct_UFunction_AELSSItemManager_InitializeItemBoxSpawnParam, "InitializeItemBoxSpawnParam" }, // 3109429856
		{ &Z_Construct_UFunction_AELSSItemManager_IsLoadCompleted, "IsLoadCompleted" }, // 998074456
		{ &Z_Construct_UFunction_AELSSItemManager_LaunchPickupObject, "LaunchPickupObject" }, // 749477836
		{ &Z_Construct_UFunction_AELSSItemManager_LoadAsyncItemClasses, "LoadAsyncItemClasses" }, // 2245946779
		{ &Z_Construct_UFunction_AELSSItemManager_LotItem, "LotItem" }, // 1902769208
		{ &Z_Construct_UFunction_AELSSItemManager_LotItemCategory, "LotItemCategory" }, // 1081051878
		{ &Z_Construct_UFunction_AELSSItemManager_LotRarity, "LotRarity" }, // 62263864
		{ &Z_Construct_UFunction_AELSSItemManager_LotSpawnNum, "LotSpawnNum" }, // 1692352215
		{ &Z_Construct_UFunction_AELSSItemManager_LotSpawnNumByItemBoxType, "LotSpawnNumByItemBoxType" }, // 2801108364
		{ &Z_Construct_UFunction_AELSSItemManager_LotWeapon, "LotWeapon" }, // 2162644331
		{ &Z_Construct_UFunction_AELSSItemManager_OnBeginRound, "OnBeginRound" }, // 2537647205
		{ &Z_Construct_UFunction_AELSSItemManager_OnEndRound, "OnEndRound" }, // 2885673477
		{ &Z_Construct_UFunction_AELSSItemManager_OnTickRound, "OnTickRound" }, // 737907978
		{ &Z_Construct_UFunction_AELSSItemManager_SpawnExpItemFromAttention, "SpawnExpItemFromAttention" }, // 2841245852
		{ &Z_Construct_UFunction_AELSSItemManager_SpawnItemBox, "SpawnItemBox" }, // 982532918
		{ &Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromAbility, "SpawnItemBoxFromAbility" }, // 810750067
		{ &Z_Construct_UFunction_AELSSItemManager_SpawnItemBoxFromRound, "SpawnItemBoxFromRound" }, // 924933082
		{ &Z_Construct_UFunction_AELSSItemManager_SpawnPickupItemObject, "SpawnPickupItemObject" }, // 2978063332
		{ &Z_Construct_UFunction_AELSSItemManager_SpawnPickupObjectsFromItemBox, "SpawnPickupObjectsFromItemBox" }, // 2952425235
		{ &Z_Construct_UFunction_AELSSItemManager_SpawnPickupShieldObject, "SpawnPickupShieldObject" }, // 3459405702
		{ &Z_Construct_UFunction_AELSSItemManager_SpawnPickupWeaponObject, "SpawnPickupWeaponObject" }, // 3625432744
		{ &Z_Construct_UFunction_AELSSItemManager_SpawnSpecifiedNumFromItemBox, "SpawnSpecifiedNumFromItemBox" }, // 1122494219
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSItemManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnOffset = { "AttentionExpItem_SpawnOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, AttentionExpItem_SpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnVelocityXY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnVelocityXY = { "AttentionExpItem_SpawnVelocityXY", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, AttentionExpItem_SpawnVelocityXY), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnVelocityXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnVelocityXY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnVelocityZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnVelocityZ = { "AttentionExpItem_SpawnVelocityZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, AttentionExpItem_SpawnVelocityZ), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnVelocityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnVelocityZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_GravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_GravityScale = { "AttentionExpItem_GravityScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, AttentionExpItem_GravityScale), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_GravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, WeaponClass), Z_Construct_UClass_AELSSWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponMeleeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponMeleeClass = { "WeaponMeleeClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, WeaponMeleeClass), Z_Construct_UClass_AELSSWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponMeleeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponMeleeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponGunClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponGunClass = { "WeaponGunClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, WeaponGunClass), Z_Construct_UClass_AELSSWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponGunClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponGunClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponThrowClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponThrowClass = { "WeaponThrowClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, WeaponThrowClass), Z_Construct_UClass_AELSSWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponThrowClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponThrowClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponTrapClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponTrapClass = { "WeaponTrapClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, WeaponTrapClass), Z_Construct_UClass_AELSSWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponTrapClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponTrapClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ShieldClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ShieldClass = { "ShieldClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ShieldClass), Z_Construct_UClass_AELSSShieldBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ShieldClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ShieldClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultSpawnVelocityXY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultSpawnVelocityXY = { "DefaultSpawnVelocityXY", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, DefaultSpawnVelocityXY), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultSpawnVelocityXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultSpawnVelocityXY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultSpawnVelocityZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultSpawnVelocityZ = { "DefaultSpawnVelocityZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, DefaultSpawnVelocityZ), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultSpawnVelocityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultSpawnVelocityZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultGravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultGravityScale = { "DefaultGravityScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, DefaultGravityScale), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultGravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultGravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_Attention_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_Attention = { "PickupCanTouchReservedTime_Attention", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, PickupCanTouchReservedTime_Attention), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_Attention_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_Attention_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_Gimmick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_Gimmick = { "PickupCanTouchReservedTime_Gimmick", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, PickupCanTouchReservedTime_Gimmick), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_Gimmick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_Gimmick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_ItemBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_ItemBox = { "PickupCanTouchReservedTime_ItemBox", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, PickupCanTouchReservedTime_ItemBox), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_ItemBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_ItemBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_MasterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_MasterData = { "MasterData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, MasterData), Z_Construct_UClass_UELSSMasterData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_MasterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_MasterData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_HpItem_Inner = { "ExcludedPikcup_HpItem", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_HpItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_HpItem = { "ExcludedPikcup_HpItem", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ExcludedPikcup_HpItem), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_HpItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_HpItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ExpItem_Inner = { "ExcludedPikcup_ExpItem", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ExpItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ExpItem = { "ExcludedPikcup_ExpItem", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ExcludedPikcup_ExpItem), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ExpItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ExpItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ShieldItem_Inner = { "ExcludedPikcup_ShieldItem", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ShieldItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ShieldItem = { "ExcludedPikcup_ShieldItem", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ExcludedPikcup_ShieldItem), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ShieldItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ShieldItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_OtherItem_Inner = { "ExcludedPikcup_OtherItem", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_OtherItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_OtherItem = { "ExcludedPikcup_OtherItem", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ExcludedPikcup_OtherItem), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_OtherItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_OtherItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_Weapon_Inner = { "ExcludedPikcup_Weapon", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_Weapon = { "ExcludedPikcup_Weapon", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ExcludedPikcup_Weapon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_Weapon_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxSpawnParam_Inner = { "ItemBoxSpawnParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSItemBoxSpawnParamForRound, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxSpawnParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxSpawnParam = { "ItemBoxSpawnParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ItemBoxSpawnParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxSpawnParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxSpawnParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamTable = { "LotRarityParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, LotRarityParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamArray_Inner = { "LotRarityParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSLotRarityParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamArray = { "LotRarityParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, LotRarityParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamTable = { "ItemBoxParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ItemBoxParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamArray_Inner = { "ItemBoxParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSItemBoxParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamArray = { "ItemBoxParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ItemBoxParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnVelocityXY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnVelocityXY = { "TreasureBoxItemSpawnVelocityXY", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, TreasureBoxItemSpawnVelocityXY), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnVelocityXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnVelocityXY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnVelocityZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnVelocityZ = { "TreasureBoxItemSpawnVelocityZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, TreasureBoxItemSpawnVelocityZ), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnVelocityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnVelocityZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnGravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnGravityScale = { "TreasureBoxItemSpawnGravityScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, TreasureBoxItemSpawnGravityScale), METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnGravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnGravityScale_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadRequestItemId_Inner = { "LoadRequestItemId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadRequestItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadRequestItemId = { "LoadRequestItemId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, LoadRequestItemId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadRequestItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadRequestItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_itemptrtest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_itemptrtest = { "itemptrtest", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, itemptrtest), Z_Construct_UClass_AELSSItemBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_itemptrtest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_itemptrtest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_pathtest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_pathtest = { "pathtest", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, pathtest), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_pathtest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_pathtest_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadedItemClassMap_ValueProp = { "LoadedItemClassMap", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AELSSItemBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadedItemClassMap_Key_KeyProp = { "LoadedItemClassMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadedItemClassMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadedItemClassMap = { "LoadedItemClassMap", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, LoadedItemClassMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadedItemClassMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadedItemClassMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidItemBoxList_Inner = { "ValidItemBoxList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSItemBox_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidItemBoxList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidItemBoxList = { "ValidItemBoxList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ValidItemBoxList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidItemBoxList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidItemBoxList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidPickupList_Inner = { "ValidPickupList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPickupBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidPickupList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidPickupList = { "ValidPickupList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ValidPickupList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidPickupList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidPickupList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidCarrotList_Inner = { "ValidCarrotList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPickupBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidCarrotList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemManager" },
		{ "ModuleRelativePath", "Public/ELSSItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidCarrotList = { "ValidCarrotList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemManager, ValidCarrotList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidCarrotList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidCarrotList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSItemManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnVelocityXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_SpawnVelocityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_AttentionExpItem_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponMeleeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponGunClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponThrowClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_WeaponTrapClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ShieldClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultSpawnVelocityXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultSpawnVelocityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_DefaultGravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_Attention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_Gimmick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_PickupCanTouchReservedTime_ItemBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_MasterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_HpItem_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_HpItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ExpItem_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ExpItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ShieldItem_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_ShieldItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_OtherItem_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_OtherItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_Weapon_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ExcludedPikcup_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxSpawnParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxSpawnParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LotRarityParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ItemBoxParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnVelocityXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnVelocityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_TreasureBoxItemSpawnGravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadRequestItemId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadRequestItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_itemptrtest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_pathtest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadedItemClassMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadedItemClassMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_LoadedItemClassMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidItemBoxList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidItemBoxList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidPickupList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidPickupList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidCarrotList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemManager_Statics::NewProp_ValidCarrotList,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSItemManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSManagerActorInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSItemManager, IELSSManagerActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSItemManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSItemManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSItemManager_Statics::ClassParams = {
		&AELSSItemManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSItemManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSItemManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSItemManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSItemManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSItemManager, 3525098783);
	template<> ABP_200508_API UClass* StaticClass<AELSSItemManager>()
	{
		return AELSSItemManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSItemManager(Z_Construct_UClass_AELSSItemManager, &AELSSItemManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSItemManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSItemManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
