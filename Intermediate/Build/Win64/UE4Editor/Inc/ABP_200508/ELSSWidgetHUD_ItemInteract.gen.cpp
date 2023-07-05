// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_ItemInteract.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_ItemInteract() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_ItemInteract();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractOperate();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPickupType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteract::execApplyWatchGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWatchGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteract::execSetInteractItem)
	{
		P_GET_ENUM(ESSInteractOperate,Z_Param_InInteractOperate);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_GET_PROPERTY(FIntProperty,Z_Param_InItemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_InItemDurability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractItem(ESSInteractOperate(Z_Param_InInteractOperate),ESSPickupType(Z_Param_InPickuptype),Z_Param_InItemId,Z_Param_InItemDurability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteract::execSetInventoryItem)
	{
		P_GET_ENUM(ESSInteractOperate,Z_Param_InInteractOperate);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_GET_PROPERTY(FIntProperty,Z_Param_InItemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_InItemDurability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryItem(ESSInteractOperate(Z_Param_InInteractOperate),ESSPickupType(Z_Param_InPickuptype),Z_Param_InItemId,Z_Param_InItemDurability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteract::execSetKeyConfig)
	{
		P_GET_ENUM(EKeyMappingType,Z_Param_InKeyMapType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKeyConfig(EKeyMappingType(Z_Param_InKeyMapType));
		P_NATIVE_END;
	}
	void UELSSWidgetHUD_ItemInteract::StaticRegisterNativesUELSSWidgetHUD_ItemInteract()
	{
		UClass* Class = UELSSWidgetHUD_ItemInteract::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyWatchGameMode", &UELSSWidgetHUD_ItemInteract::execApplyWatchGameMode },
			{ "SetInteractItem", &UELSSWidgetHUD_ItemInteract::execSetInteractItem },
			{ "SetInventoryItem", &UELSSWidgetHUD_ItemInteract::execSetInventoryItem },
			{ "SetKeyConfig", &UELSSWidgetHUD_ItemInteract::execSetKeyConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_ApplyWatchGameMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_ApplyWatchGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_ApplyWatchGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteract, nullptr, "ApplyWatchGameMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_ApplyWatchGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_ApplyWatchGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_ApplyWatchGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_ApplyWatchGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics
	{
		struct ELSSWidgetHUD_ItemInteract_eventSetInteractItem_Parms
		{
			ESSInteractOperate InInteractOperate;
			ESSPickupType InPickuptype;
			int32 InItemId;
			int32 InItemDurability;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InInteractOperate_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InInteractOperate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPickuptype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPickuptype;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InInteractOperate = { "InInteractOperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteract_eventSetInteractItem_Parms, InInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteract_eventSetInteractItem_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InItemId = { "InItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteract_eventSetInteractItem_Parms, InItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InItemDurability = { "InItemDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteract_eventSetInteractItem_Parms, InItemDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InInteractOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::NewProp_InItemDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteract, nullptr, "SetInteractItem", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteract_eventSetInteractItem_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics
	{
		struct ELSSWidgetHUD_ItemInteract_eventSetInventoryItem_Parms
		{
			ESSInteractOperate InInteractOperate;
			ESSPickupType InPickuptype;
			int32 InItemId;
			int32 InItemDurability;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InInteractOperate_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InInteractOperate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPickuptype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPickuptype;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InInteractOperate = { "InInteractOperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteract_eventSetInventoryItem_Parms, InInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteract_eventSetInventoryItem_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InItemId = { "InItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteract_eventSetInventoryItem_Parms, InItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InItemDurability = { "InItemDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteract_eventSetInventoryItem_Parms, InItemDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InInteractOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::NewProp_InItemDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteract, nullptr, "SetInventoryItem", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteract_eventSetInventoryItem_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics
	{
		struct ELSSWidgetHUD_ItemInteract_eventSetKeyConfig_Parms
		{
			EKeyMappingType InKeyMapType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InKeyMapType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InKeyMapType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::NewProp_InKeyMapType = { "InKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteract_eventSetKeyConfig_Parms, InKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::NewProp_InKeyMapType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteract, nullptr, "SetKeyConfig", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteract_eventSetKeyConfig_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_NoRegister()
	{
		return UELSSWidgetHUD_ItemInteract::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupParts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryParts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_ApplyWatchGameMode, "ApplyWatchGameMode" }, // 115762309
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInteractItem, "SetInteractItem" }, // 3922696175
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetInventoryItem, "SetInventoryItem" }, // 191514144
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteract_SetKeyConfig, "SetKeyConfig" }, // 3897578850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_ItemInteract.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteract.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::NewProp_PickupParts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteract" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::NewProp_PickupParts = { "PickupParts", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteract, PickupParts), Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::NewProp_PickupParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::NewProp_PickupParts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::NewProp_InventoryParts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteract" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::NewProp_InventoryParts = { "InventoryParts", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteract, InventoryParts), Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::NewProp_InventoryParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::NewProp_InventoryParts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::NewProp_PickupParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::NewProp_InventoryParts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_ItemInteract>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::ClassParams = {
		&UELSSWidgetHUD_ItemInteract::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_ItemInteract()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_ItemInteract, 3983472965);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_ItemInteract>()
	{
		return UELSSWidgetHUD_ItemInteract::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_ItemInteract(Z_Construct_UClass_UELSSWidgetHUD_ItemInteract, &UELSSWidgetHUD_ItemInteract::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_ItemInteract"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_ItemInteract);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
