// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_Inventory() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_Inventory_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_Inventory();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPickupType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execApplyBareIconGuideState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyBareIconGuideState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execApplyInventoryIcon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPickupID);
		P_GET_PROPERTY(FIntProperty,Z_Param_inDurability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyInventoryIcon(Z_Param_InIndex,ESSPickupType(Z_Param_InPickuptype),Z_Param_InPickupID,Z_Param_inDurability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execApplyWatchGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWatchGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execDeleteInventoryIcon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteInventoryIcon(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execGetItemName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InItemId);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetItemName(Z_Param_InItemId,ESSPickupType(Z_Param_InPickuptype));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execPlayInWeaponName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayInWeaponName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execSetInventoryIconValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inDurability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryIconValue(Z_Param_InIndex,Z_Param_inDurability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execSetInventoryLimit)
	{
		P_GET_UBOOL(Z_Param_InFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryLimit(Z_Param_InFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execSetInventoryPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryPosition(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execSetSlotKeyConfig)
	{
		P_GET_ENUM(EKeyMappingType,Z_Param_InKeyMapType);
		P_GET_UBOOL(Z_Param_InIsLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlotKeyConfig(EKeyMappingType(Z_Param_InKeyMapType),Z_Param_InIsLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Inventory::execSetVisibleOperationButton)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleOperationButton(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_Inventory_SetWeaponName = FName(TEXT("SetWeaponName"));
	void UELSSWidgetHUD_Inventory::SetWeaponName(const FString& InWeaponName)
	{
		ELSSWidgetHUD_Inventory_eventSetWeaponName_Parms Parms;
		Parms.InWeaponName=InWeaponName;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_Inventory_SetWeaponName),&Parms);
	}
	void UELSSWidgetHUD_Inventory::StaticRegisterNativesUELSSWidgetHUD_Inventory()
	{
		UClass* Class = UELSSWidgetHUD_Inventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyBareIconGuideState", &UELSSWidgetHUD_Inventory::execApplyBareIconGuideState },
			{ "ApplyInventoryIcon", &UELSSWidgetHUD_Inventory::execApplyInventoryIcon },
			{ "ApplyWatchGameMode", &UELSSWidgetHUD_Inventory::execApplyWatchGameMode },
			{ "DeleteInventoryIcon", &UELSSWidgetHUD_Inventory::execDeleteInventoryIcon },
			{ "GetItemName", &UELSSWidgetHUD_Inventory::execGetItemName },
			{ "PlayInWeaponName", &UELSSWidgetHUD_Inventory::execPlayInWeaponName },
			{ "SetInventoryIconValue", &UELSSWidgetHUD_Inventory::execSetInventoryIconValue },
			{ "SetInventoryLimit", &UELSSWidgetHUD_Inventory::execSetInventoryLimit },
			{ "SetInventoryPosition", &UELSSWidgetHUD_Inventory::execSetInventoryPosition },
			{ "SetSlotKeyConfig", &UELSSWidgetHUD_Inventory::execSetSlotKeyConfig },
			{ "SetVisibleOperationButton", &UELSSWidgetHUD_Inventory::execSetVisibleOperationButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyBareIconGuideState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyBareIconGuideState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyBareIconGuideState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "ApplyBareIconGuideState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyBareIconGuideState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyBareIconGuideState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyBareIconGuideState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyBareIconGuideState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics
	{
		struct ELSSWidgetHUD_Inventory_eventApplyInventoryIcon_Parms
		{
			int32 InIndex;
			ESSPickupType InPickuptype;
			int32 InPickupID;
			int32 inDurability;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPickuptype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPickuptype;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPickupID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventApplyInventoryIcon_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventApplyInventoryIcon_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::NewProp_InPickupID = { "InPickupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventApplyInventoryIcon_Parms, InPickupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::NewProp_inDurability = { "inDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventApplyInventoryIcon_Parms, inDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::NewProp_InPickupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::NewProp_inDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "ApplyInventoryIcon", nullptr, nullptr, sizeof(ELSSWidgetHUD_Inventory_eventApplyInventoryIcon_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyWatchGameMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyWatchGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyWatchGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "ApplyWatchGameMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyWatchGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyWatchGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyWatchGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyWatchGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics
	{
		struct ELSSWidgetHUD_Inventory_eventDeleteInventoryIcon_Parms
		{
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventDeleteInventoryIcon_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "DeleteInventoryIcon", nullptr, nullptr, sizeof(ELSSWidgetHUD_Inventory_eventDeleteInventoryIcon_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics
	{
		struct ELSSWidgetHUD_Inventory_eventGetItemName_Parms
		{
			int32 InItemId;
			ESSPickupType InPickuptype;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPickuptype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPickuptype;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::NewProp_InItemId = { "InItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventGetItemName_Parms, InItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventGetItemName_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventGetItemName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::NewProp_InItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "GetItemName", nullptr, nullptr, sizeof(ELSSWidgetHUD_Inventory_eventGetItemName_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_PlayInWeaponName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_PlayInWeaponName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_PlayInWeaponName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "PlayInWeaponName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_PlayInWeaponName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_PlayInWeaponName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_PlayInWeaponName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_PlayInWeaponName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics
	{
		struct ELSSWidgetHUD_Inventory_eventSetInventoryIconValue_Parms
		{
			int32 InIndex;
			int32 inDurability;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventSetInventoryIconValue_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::NewProp_inDurability = { "inDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventSetInventoryIconValue_Parms, inDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::NewProp_inDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "SetInventoryIconValue", nullptr, nullptr, sizeof(ELSSWidgetHUD_Inventory_eventSetInventoryIconValue_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics
	{
		struct ELSSWidgetHUD_Inventory_eventSetInventoryLimit_Parms
		{
			bool InFlag;
		};
		static void NewProp_InFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::NewProp_InFlag_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_Inventory_eventSetInventoryLimit_Parms*)Obj)->InFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::NewProp_InFlag = { "InFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_Inventory_eventSetInventoryLimit_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::NewProp_InFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::NewProp_InFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "SetInventoryLimit", nullptr, nullptr, sizeof(ELSSWidgetHUD_Inventory_eventSetInventoryLimit_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics
	{
		struct ELSSWidgetHUD_Inventory_eventSetInventoryPosition_Parms
		{
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventSetInventoryPosition_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "SetInventoryPosition", nullptr, nullptr, sizeof(ELSSWidgetHUD_Inventory_eventSetInventoryPosition_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics
	{
		struct ELSSWidgetHUD_Inventory_eventSetSlotKeyConfig_Parms
		{
			EKeyMappingType InKeyMapType;
			bool InIsLeft;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InKeyMapType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InKeyMapType;
		static void NewProp_InIsLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::NewProp_InKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::NewProp_InKeyMapType = { "InKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventSetSlotKeyConfig_Parms, InKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::NewProp_InIsLeft_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_Inventory_eventSetSlotKeyConfig_Parms*)Obj)->InIsLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::NewProp_InIsLeft = { "InIsLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_Inventory_eventSetSlotKeyConfig_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::NewProp_InIsLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::NewProp_InKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::NewProp_InKeyMapType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::NewProp_InIsLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "SetSlotKeyConfig", nullptr, nullptr, sizeof(ELSSWidgetHUD_Inventory_eventSetSlotKeyConfig_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics
	{
		struct ELSSWidgetHUD_Inventory_eventSetVisibleOperationButton_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_Inventory_eventSetVisibleOperationButton_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_Inventory_eventSetVisibleOperationButton_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "SetVisibleOperationButton", nullptr, nullptr, sizeof(ELSSWidgetHUD_Inventory_eventSetVisibleOperationButton_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InWeaponName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::NewProp_InWeaponName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::NewProp_InWeaponName = { "InWeaponName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Inventory_eventSetWeaponName_Parms, InWeaponName), METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::NewProp_InWeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::NewProp_InWeaponName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::NewProp_InWeaponName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Inventory, nullptr, "SetWeaponName", nullptr, nullptr, sizeof(ELSSWidgetHUD_Inventory_eventSetWeaponName_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_Inventory_NoRegister()
	{
		return UELSSWidgetHUD_Inventory::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInWeaponNameAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayInWeaponNameAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotWidget_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlotWidget_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyBareIconGuideState, "ApplyBareIconGuideState" }, // 2231280685
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyInventoryIcon, "ApplyInventoryIcon" }, // 779660652
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_ApplyWatchGameMode, "ApplyWatchGameMode" }, // 2381444947
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_DeleteInventoryIcon, "DeleteInventoryIcon" }, // 431996384
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_GetItemName, "GetItemName" }, // 2116948202
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_PlayInWeaponName, "PlayInWeaponName" }, // 1679887028
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryIconValue, "SetInventoryIconValue" }, // 642317793
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryLimit, "SetInventoryLimit" }, // 1279666990
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetInventoryPosition, "SetInventoryPosition" }, // 521424097
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetSlotKeyConfig, "SetSlotKeyConfig" }, // 2885243915
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetVisibleOperationButton, "SetVisibleOperationButton" }, // 122699256
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Inventory_SetWeaponName, "SetWeaponName" }, // 2644883634
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_Inventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_PlayInWeaponNameAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Inventory" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_PlayInWeaponNameAnim = { "PlayInWeaponNameAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Inventory, PlayInWeaponNameAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_PlayInWeaponNameAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_PlayInWeaponNameAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SlotWidget_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SlotWidget_Inner = { "SlotWidget", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SlotWidget_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SlotWidget_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SlotWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SlotWidget = { "SlotWidget", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Inventory, SlotWidget), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SlotWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SelectSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Inventory" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SelectSlotIndex = { "SelectSlotIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Inventory, SelectSlotIndex), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SelectSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SelectSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_PlayInWeaponNameAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SlotWidget_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SlotWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::NewProp_SelectSlotIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_Inventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::ClassParams = {
		&UELSSWidgetHUD_Inventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_Inventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_Inventory, 2996908831);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_Inventory>()
	{
		return UELSSWidgetHUD_Inventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_Inventory(Z_Construct_UClass_UELSSWidgetHUD_Inventory, &UELSSWidgetHUD_Inventory::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_Inventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_Inventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
