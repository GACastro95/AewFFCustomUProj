// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_ItemInteractParts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_ItemInteractParts() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPickupType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRarity();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractOperate();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteractParts::execGetItemName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InID);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetItemName(Z_Param_InID,ESSPickupType(Z_Param_InPickuptype));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteractParts::execGetRarity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InID);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSRarity*)Z_Param__Result=P_THIS->GetRarity(Z_Param_InID,ESSPickupType(Z_Param_InPickuptype));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteractParts::execGetTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InID);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetTexture(Z_Param_InID,ESSPickupType(Z_Param_InPickuptype));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteractParts::execSetBareIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBareIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteractParts::execSetInteractItem)
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
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteractParts::execSetInventoryItem)
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
	DEFINE_FUNCTION(UELSSWidgetHUD_ItemInteractParts::execSetItemTexture)
	{
		P_GET_ENUM(ESSInteractOperate,Z_Param_InInteractOperate);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_GET_PROPERTY(FIntProperty,Z_Param_InItemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_InItemDurability);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemTexture(ESSInteractOperate(Z_Param_InInteractOperate),ESSPickupType(Z_Param_InPickuptype),Z_Param_InItemId,Z_Param_InItemDurability,Z_Param_inSlotIndex);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_ItemInteractParts_ApplyWatchGameMode = FName(TEXT("ApplyWatchGameMode"));
	void UELSSWidgetHUD_ItemInteractParts::ApplyWatchGameMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_ItemInteractParts_ApplyWatchGameMode),NULL);
	}
	static FName NAME_UELSSWidgetHUD_ItemInteractParts_SetActText = FName(TEXT("SetActText"));
	void UELSSWidgetHUD_ItemInteractParts::SetActText(const FString& InItemNameText)
	{
		ELSSWidgetHUD_ItemInteractParts_eventSetActText_Parms Parms;
		Parms.InItemNameText=InItemNameText;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_ItemInteractParts_SetActText),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible = FName(TEXT("SetAttentionIconVisible"));
	void UELSSWidgetHUD_ItemInteractParts::SetAttentionIconVisible(bool inIsVisible)
	{
		ELSSWidgetHUD_ItemInteractParts_eventSetAttentionIconVisible_Parms Parms;
		Parms.inIsVisible=inIsVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible = FName(TEXT("SetButtonVisible"));
	void UELSSWidgetHUD_ItemInteractParts::SetButtonVisible(bool inIsVisible)
	{
		ELSSWidgetHUD_ItemInteractParts_eventSetButtonVisible_Parms Parms;
		Parms.inIsVisible=inIsVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_ItemInteractParts_SetItemDurability = FName(TEXT("SetItemDurability"));
	void UELSSWidgetHUD_ItemInteractParts::SetItemDurability(int32 InItemDurability)
	{
		ELSSWidgetHUD_ItemInteractParts_eventSetItemDurability_Parms Parms;
		Parms.InItemDurability=InItemDurability;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_ItemInteractParts_SetItemDurability),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_ItemInteractParts_SetItemName = FName(TEXT("SetItemName"));
	void UELSSWidgetHUD_ItemInteractParts::SetItemName(const FString& InItemNameText)
	{
		ELSSWidgetHUD_ItemInteractParts_eventSetItemName_Parms Parms;
		Parms.InItemNameText=InItemNameText;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_ItemInteractParts_SetItemName),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig = FName(TEXT("SetKeyConfig"));
	void UELSSWidgetHUD_ItemInteractParts::SetKeyConfig(EKeyMappingType InKeyMapType)
	{
		ELSSWidgetHUD_ItemInteractParts_eventSetKeyConfig_Parms Parms;
		Parms.InKeyMapType=InKeyMapType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture = FName(TEXT("SetRarityTexture"));
	void UELSSWidgetHUD_ItemInteractParts::SetRarityTexture(ESSRarity inRarity)
	{
		ELSSWidgetHUD_ItemInteractParts_eventSetRarityTexture_Parms Parms;
		Parms.inRarity=inRarity;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture),&Parms);
	}
	void UELSSWidgetHUD_ItemInteractParts::StaticRegisterNativesUELSSWidgetHUD_ItemInteractParts()
	{
		UClass* Class = UELSSWidgetHUD_ItemInteractParts::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemName", &UELSSWidgetHUD_ItemInteractParts::execGetItemName },
			{ "GetRarity", &UELSSWidgetHUD_ItemInteractParts::execGetRarity },
			{ "GetTexture", &UELSSWidgetHUD_ItemInteractParts::execGetTexture },
			{ "SetBareIcon", &UELSSWidgetHUD_ItemInteractParts::execSetBareIcon },
			{ "SetInteractItem", &UELSSWidgetHUD_ItemInteractParts::execSetInteractItem },
			{ "SetInventoryItem", &UELSSWidgetHUD_ItemInteractParts::execSetInventoryItem },
			{ "SetItemTexture", &UELSSWidgetHUD_ItemInteractParts::execSetItemTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_ApplyWatchGameMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_ApplyWatchGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_ApplyWatchGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "ApplyWatchGameMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_ApplyWatchGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_ApplyWatchGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_ApplyWatchGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_ApplyWatchGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics
	{
		struct ELSSWidgetHUD_ItemInteractParts_eventGetItemName_Parms
		{
			int32 InID;
			ESSPickupType InPickuptype;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPickuptype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPickuptype;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventGetItemName_Parms, InID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventGetItemName_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventGetItemName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::NewProp_InID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "GetItemName", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventGetItemName_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics
	{
		struct ELSSWidgetHUD_ItemInteractParts_eventGetRarity_Parms
		{
			int32 InID;
			ESSPickupType InPickuptype;
			ESSRarity ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPickuptype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPickuptype;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventGetRarity_Parms, InID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventGetRarity_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventGetRarity_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::NewProp_InID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "GetRarity", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventGetRarity_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics
	{
		struct ELSSWidgetHUD_ItemInteractParts_eventGetTexture_Parms
		{
			int32 InID;
			ESSPickupType InPickuptype;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPickuptype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPickuptype;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventGetTexture_Parms, InID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventGetTexture_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::NewProp_InID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "GetTexture", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventGetTexture_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InItemNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InItemNameText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::NewProp_InItemNameText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::NewProp_InItemNameText = { "InItemNameText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetActText_Parms, InItemNameText), METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::NewProp_InItemNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::NewProp_InItemNameText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::NewProp_InItemNameText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetActText", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetActText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics
	{
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_ItemInteractParts_eventSetAttentionIconVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetAttentionIconVisible_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetAttentionIconVisible", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetAttentionIconVisible_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetBareIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetBareIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetBareIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetBareIcon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetBareIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetBareIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetBareIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetBareIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics
	{
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_ItemInteractParts_eventSetButtonVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetButtonVisible_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetButtonVisible", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetButtonVisible_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics
	{
		struct ELSSWidgetHUD_ItemInteractParts_eventSetInteractItem_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InInteractOperate = { "InInteractOperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetInteractItem_Parms, InInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetInteractItem_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InItemId = { "InItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetInteractItem_Parms, InItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InItemDurability = { "InItemDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetInteractItem_Parms, InItemDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InInteractOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::NewProp_InItemDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetInteractItem", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetInteractItem_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics
	{
		struct ELSSWidgetHUD_ItemInteractParts_eventSetInventoryItem_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InInteractOperate = { "InInteractOperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetInventoryItem_Parms, InInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetInventoryItem_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InItemId = { "InItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetInventoryItem_Parms, InItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InItemDurability = { "InItemDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetInventoryItem_Parms, InItemDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InInteractOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::NewProp_InItemDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetInventoryItem", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetInventoryItem_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics::NewProp_InItemDurability = { "InItemDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetItemDurability_Parms, InItemDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics::NewProp_InItemDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetItemDurability", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetItemDurability_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InItemNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InItemNameText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::NewProp_InItemNameText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::NewProp_InItemNameText = { "InItemNameText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetItemName_Parms, InItemNameText), METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::NewProp_InItemNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::NewProp_InItemNameText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::NewProp_InItemNameText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetItemName", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetItemName_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics
	{
		struct ELSSWidgetHUD_ItemInteractParts_eventSetItemTexture_Parms
		{
			ESSInteractOperate InInteractOperate;
			ESSPickupType InPickuptype;
			int32 InItemId;
			int32 InItemDurability;
			int32 inSlotIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InInteractOperate_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InInteractOperate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPickuptype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPickuptype;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemDurability;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InInteractOperate = { "InInteractOperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetItemTexture_Parms, InInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetItemTexture_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InItemId = { "InItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetItemTexture_Parms, InItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InItemDurability = { "InItemDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetItemTexture_Parms, InItemDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_inSlotIndex = { "inSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetItemTexture_Parms, inSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InInteractOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_InItemDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::NewProp_inSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetItemTexture", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetItemTexture_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InKeyMapType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InKeyMapType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::NewProp_InKeyMapType = { "InKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetKeyConfig_Parms, InKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::NewProp_InKeyMapType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetKeyConfig", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetKeyConfig_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inRarity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inRarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::NewProp_inRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::NewProp_inRarity = { "inRarity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_ItemInteractParts_eventSetRarityTexture_Parms, inRarity), Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::NewProp_inRarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::NewProp_inRarity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, nullptr, "SetRarityTexture", nullptr, nullptr, sizeof(ELSSWidgetHUD_ItemInteractParts_eventSetRarityTexture_Parms), Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_NoRegister()
	{
		return UELSSWidgetHUD_ItemInteractParts::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayActiveAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayActiveAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInActiveAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayInActiveAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDurabilityWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDurabilityWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommandWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockableItemRarityDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockableItemRarityDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BareIconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BareIconTexture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreInventoryInteractOperate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreInventoryInteractOperate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreInventoryInteractOperate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_ApplyWatchGameMode, "ApplyWatchGameMode" }, // 3102621777
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetItemName, "GetItemName" }, // 1119444306
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetRarity, "GetRarity" }, // 1616986531
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_GetTexture, "GetTexture" }, // 2663038396
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetActText, "SetActText" }, // 2408309594
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetAttentionIconVisible, "SetAttentionIconVisible" }, // 3251889724
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetBareIcon, "SetBareIcon" }, // 1475434081
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetButtonVisible, "SetButtonVisible" }, // 4058155955
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInteractItem, "SetInteractItem" }, // 2347491471
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetInventoryItem, "SetInventoryItem" }, // 4208530267
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemDurability, "SetItemDurability" }, // 943746479
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemName, "SetItemName" }, // 262678961
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetItemTexture, "SetItemTexture" }, // 405396192
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetKeyConfig, "SetKeyConfig" }, // 2426539242
		{ &Z_Construct_UFunction_UELSSWidgetHUD_ItemInteractParts_SetRarityTexture, "SetRarityTexture" }, // 986952260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_ItemInteractParts.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PlayActiveAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteractParts" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PlayActiveAnim = { "PlayActiveAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, PlayActiveAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PlayActiveAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PlayActiveAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PlayInActiveAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteractParts" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PlayInActiveAnim = { "PlayInActiveAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, PlayInActiveAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PlayInActiveAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PlayInActiveAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_IconImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteractParts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_IconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_IconImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_ItemDurabilityWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteractParts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_ItemDurabilityWidget = { "ItemDurabilityWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, ItemDurabilityWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_ItemDurabilityWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_ItemDurabilityWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_ArrowWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteractParts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_ArrowWidget = { "ArrowWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, ArrowWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_ArrowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_ArrowWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_CommandWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteractParts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_CommandWidget = { "CommandWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, CommandWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_CommandWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_CommandWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_UnlockableItemRarityDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteractParts" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_UnlockableItemRarityDataTable = { "UnlockableItemRarityDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, UnlockableItemRarityDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_UnlockableItemRarityDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_UnlockableItemRarityDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_BareIconTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteractParts" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_BareIconTexture = { "BareIconTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, BareIconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_BareIconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_BareIconTexture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PreInventoryInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PreInventoryInteractOperate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_ItemInteractParts" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_ItemInteractParts.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PreInventoryInteractOperate = { "PreInventoryInteractOperate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, PreInventoryInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PreInventoryInteractOperate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PreInventoryInteractOperate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PlayActiveAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PlayInActiveAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_IconImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_ItemDurabilityWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_ArrowWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_CommandWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_UnlockableItemRarityDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_BareIconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PreInventoryInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::NewProp_PreInventoryInteractOperate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_ItemInteractParts>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::ClassParams = {
		&UELSSWidgetHUD_ItemInteractParts::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_ItemInteractParts, 2092231062);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_ItemInteractParts>()
	{
		return UELSSWidgetHUD_ItemInteractParts::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_ItemInteractParts(Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts, &UELSSWidgetHUD_ItemInteractParts::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_ItemInteractParts"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_ItemInteractParts);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
