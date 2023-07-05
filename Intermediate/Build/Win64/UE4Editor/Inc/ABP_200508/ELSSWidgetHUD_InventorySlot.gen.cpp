// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_InventorySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_InventorySlot() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_InventorySlot();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPickupType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRarity();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execApplyWatchGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWatchGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execCheckDonePlayAnimations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckDonePlayAnimations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execGetDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execGetIsSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execGetItemId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execGetPickupType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSPickupType*)Z_Param__Result=P_THIS->GetPickupType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execGetTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InID);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetTexture(Z_Param_InID,ESSPickupType(Z_Param_InPickuptype));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execSetDurabilityValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDurability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDurabilityValue(Z_Param_inDurability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execSetDurabilityVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDurabilityVisible(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execSetEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execSetGuideVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGuideVisible(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execSetSelectState)
	{
		P_GET_UBOOL(Z_Param_InIsSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectState(Z_Param_InIsSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InventorySlot::execSetThumbnail)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPickupID);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_GET_UBOOL(Z_Param_InIsSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThumbnail(Z_Param_InPickupID,ESSPickupType(Z_Param_InPickuptype),Z_Param_InIsSelected);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_InventorySlot_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_InventorySlot::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_InventorySlot_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_InventorySlot_SetDurability = FName(TEXT("SetDurability"));
	void UELSSWidgetHUD_InventorySlot::SetDurability(int32 inDurability)
	{
		ELSSWidgetHUD_InventorySlot_eventSetDurability_Parms Parms;
		Parms.inDurability=inDurability;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_InventorySlot_SetDurability),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_InventorySlot_SetKeyConfig = FName(TEXT("SetKeyConfig"));
	void UELSSWidgetHUD_InventorySlot::SetKeyConfig(EKeyMappingType InKeyMapType, bool InIsLeft)
	{
		ELSSWidgetHUD_InventorySlot_eventSetKeyConfig_Parms Parms;
		Parms.InKeyMapType=InKeyMapType;
		Parms.InIsLeft=InIsLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_InventorySlot_SetKeyConfig),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_InventorySlot_SetRarity = FName(TEXT("SetRarity"));
	void UELSSWidgetHUD_InventorySlot::SetRarity(ESSRarity inRarity)
	{
		ELSSWidgetHUD_InventorySlot_eventSetRarity_Parms Parms;
		Parms.inRarity=inRarity;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_InventorySlot_SetRarity),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_InventorySlot_SkipPlayActiveAnim = FName(TEXT("SkipPlayActiveAnim"));
	void UELSSWidgetHUD_InventorySlot::SkipPlayActiveAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_InventorySlot_SkipPlayActiveAnim),NULL);
	}
	static FName NAME_UELSSWidgetHUD_InventorySlot_SkipPlayEmptyAnim = FName(TEXT("SkipPlayEmptyAnim"));
	void UELSSWidgetHUD_InventorySlot::SkipPlayEmptyAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_InventorySlot_SkipPlayEmptyAnim),NULL);
	}
	static FName NAME_UELSSWidgetHUD_InventorySlot_SkipPlayInActiveAnim = FName(TEXT("SkipPlayInActiveAnim"));
	void UELSSWidgetHUD_InventorySlot::SkipPlayInActiveAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_InventorySlot_SkipPlayInActiveAnim),NULL);
	}
	void UELSSWidgetHUD_InventorySlot::StaticRegisterNativesUELSSWidgetHUD_InventorySlot()
	{
		UClass* Class = UELSSWidgetHUD_InventorySlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyWatchGameMode", &UELSSWidgetHUD_InventorySlot::execApplyWatchGameMode },
			{ "CheckDonePlayAnimations", &UELSSWidgetHUD_InventorySlot::execCheckDonePlayAnimations },
			{ "GetDurability", &UELSSWidgetHUD_InventorySlot::execGetDurability },
			{ "GetIsSelected", &UELSSWidgetHUD_InventorySlot::execGetIsSelected },
			{ "GetItemId", &UELSSWidgetHUD_InventorySlot::execGetItemId },
			{ "GetPickupType", &UELSSWidgetHUD_InventorySlot::execGetPickupType },
			{ "GetTexture", &UELSSWidgetHUD_InventorySlot::execGetTexture },
			{ "IsEmpty", &UELSSWidgetHUD_InventorySlot::execIsEmpty },
			{ "SetDurabilityValue", &UELSSWidgetHUD_InventorySlot::execSetDurabilityValue },
			{ "SetDurabilityVisible", &UELSSWidgetHUD_InventorySlot::execSetDurabilityVisible },
			{ "SetEmpty", &UELSSWidgetHUD_InventorySlot::execSetEmpty },
			{ "SetGuideVisible", &UELSSWidgetHUD_InventorySlot::execSetGuideVisible },
			{ "SetSelectState", &UELSSWidgetHUD_InventorySlot::execSetSelectState },
			{ "SetThumbnail", &UELSSWidgetHUD_InventorySlot::execSetThumbnail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_ApplyWatchGameMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_ApplyWatchGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_ApplyWatchGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "ApplyWatchGameMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_ApplyWatchGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_ApplyWatchGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_ApplyWatchGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_ApplyWatchGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_CheckDonePlayAnimations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_CheckDonePlayAnimations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_CheckDonePlayAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "CheckDonePlayAnimations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_CheckDonePlayAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_CheckDonePlayAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_CheckDonePlayAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_CheckDonePlayAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventGetDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventGetDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "GetDurability", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventGetDurability_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventGetIsSelected_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_InventorySlot_eventGetIsSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_InventorySlot_eventGetIsSelected_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "GetIsSelected", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventGetIsSelected_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventGetItemId_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventGetItemId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "GetItemId", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventGetItemId_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventGetPickupType_Parms
		{
			ESSPickupType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventGetPickupType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "GetPickupType", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventGetPickupType_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventGetTexture_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventGetTexture_Parms, InID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventGetTexture_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::NewProp_InID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "GetTexture", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventGetTexture_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_InventorySlot_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_InventorySlot_eventIsEmpty_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "IsEmpty", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventIsEmpty_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics::NewProp_inDurability = { "inDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventSetDurability_Parms, inDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics::NewProp_inDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SetDurability", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventSetDurability_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventSetDurabilityValue_Parms
		{
			int32 inDurability;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics::NewProp_inDurability = { "inDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventSetDurabilityValue_Parms, inDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics::NewProp_inDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SetDurabilityValue", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventSetDurabilityValue_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventSetDurabilityVisible_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_InventorySlot_eventSetDurabilityVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_InventorySlot_eventSetDurabilityVisible_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SetDurabilityVisible", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventSetDurabilityVisible_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SetEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventSetGuideVisible_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_InventorySlot_eventSetGuideVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_InventorySlot_eventSetGuideVisible_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SetGuideVisible", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventSetGuideVisible_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics
	{
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::NewProp_InKeyMapType = { "InKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventSetKeyConfig_Parms, InKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::NewProp_InIsLeft_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_InventorySlot_eventSetKeyConfig_Parms*)Obj)->InIsLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::NewProp_InIsLeft = { "InIsLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_InventorySlot_eventSetKeyConfig_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::NewProp_InIsLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::NewProp_InKeyMapType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::NewProp_InIsLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SetKeyConfig", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventSetKeyConfig_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inRarity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inRarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::NewProp_inRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::NewProp_inRarity = { "inRarity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventSetRarity_Parms, inRarity), Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::NewProp_inRarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::NewProp_inRarity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SetRarity", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventSetRarity_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventSetSelectState_Parms
		{
			bool InIsSelected;
		};
		static void NewProp_InIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::NewProp_InIsSelected_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_InventorySlot_eventSetSelectState_Parms*)Obj)->InIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::NewProp_InIsSelected = { "InIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_InventorySlot_eventSetSelectState_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::NewProp_InIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::NewProp_InIsSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SetSelectState", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventSetSelectState_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics
	{
		struct ELSSWidgetHUD_InventorySlot_eventSetThumbnail_Parms
		{
			int32 InPickupID;
			ESSPickupType InPickuptype;
			bool InIsSelected;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPickupID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPickuptype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPickuptype;
		static void NewProp_InIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::NewProp_InPickupID = { "InPickupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventSetThumbnail_Parms, InPickupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InventorySlot_eventSetThumbnail_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::NewProp_InIsSelected_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_InventorySlot_eventSetThumbnail_Parms*)Obj)->InIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::NewProp_InIsSelected = { "InIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_InventorySlot_eventSetThumbnail_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::NewProp_InIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::NewProp_InPickupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::NewProp_InIsSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SetThumbnail", nullptr, nullptr, sizeof(ELSSWidgetHUD_InventorySlot_eventSetThumbnail_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayActiveAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayActiveAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayActiveAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SkipPlayActiveAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayActiveAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayActiveAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayActiveAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayActiveAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayEmptyAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayEmptyAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayEmptyAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SkipPlayEmptyAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayEmptyAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayEmptyAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayEmptyAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayEmptyAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayInActiveAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayInActiveAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayInActiveAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, nullptr, "SkipPlayInActiveAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayInActiveAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayInActiveAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayInActiveAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayInActiveAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_NoRegister()
	{
		return UELSSWidgetHUD_InventorySlot::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateActiveAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateActiveAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateInActiveAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateInActiveAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurabilityWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DurabilityWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuideButtonWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuideButtonWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemThumbnailTexImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemThumbnailTexImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemThumbnailShadowImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemThumbnailShadowImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityTexImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityTexImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityTexAddImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityTexAddImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockableItemRarityDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockableItemRarityDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurabilityValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DurabilityValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PickupType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PickupType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEmptyFlag_MetaData[];
#endif
		static void NewProp_IsEmptyFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEmptyFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSelected_MetaData[];
#endif
		static void NewProp_IsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWatchGameMode_MetaData[];
#endif
		static void NewProp_IsWatchGameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWatchGameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_ApplyWatchGameMode, "ApplyWatchGameMode" }, // 1970636432
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_CheckDonePlayAnimations, "CheckDonePlayAnimations" }, // 1289622628
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetDurability, "GetDurability" }, // 2135965083
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetIsSelected, "GetIsSelected" }, // 4132500242
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetItemId, "GetItemId" }, // 480196241
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetPickupType, "GetPickupType" }, // 1669985514
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_GetTexture, "GetTexture" }, // 662994963
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_Init, "Init" }, // 2892455256
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_IsEmpty, "IsEmpty" }, // 1479211848
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurability, "SetDurability" }, // 1292380555
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityValue, "SetDurabilityValue" }, // 687747785
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetDurabilityVisible, "SetDurabilityVisible" }, // 2963195930
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetEmpty, "SetEmpty" }, // 1321007534
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetGuideVisible, "SetGuideVisible" }, // 3441117373
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetKeyConfig, "SetKeyConfig" }, // 2997894983
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetRarity, "SetRarity" }, // 4268920403
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetSelectState, "SetSelectState" }, // 2267620995
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SetThumbnail, "SetThumbnail" }, // 2481507195
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayActiveAnim, "SkipPlayActiveAnim" }, // 2110880586
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayEmptyAnim, "SkipPlayEmptyAnim" }, // 1026632181
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InventorySlot_SkipPlayInActiveAnim, "SkipPlayInActiveAnim" }, // 1761047931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_InventorySlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_StateActiveAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_StateActiveAnim = { "StateActiveAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, StateActiveAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_StateActiveAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_StateActiveAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_StateInActiveAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_StateInActiveAnim = { "StateInActiveAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, StateInActiveAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_StateInActiveAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_StateInActiveAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_EmptyAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_EmptyAnim = { "EmptyAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, EmptyAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_EmptyAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_EmptyAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_DurabilityWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_DurabilityWidget = { "DurabilityWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, DurabilityWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_DurabilityWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_DurabilityWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_GuideButtonWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_GuideButtonWidget = { "GuideButtonWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, GuideButtonWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_GuideButtonWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_GuideButtonWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemThumbnailTexImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemThumbnailTexImage = { "ItemThumbnailTexImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, ItemThumbnailTexImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemThumbnailTexImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemThumbnailTexImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemThumbnailShadowImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemThumbnailShadowImage = { "ItemThumbnailShadowImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, ItemThumbnailShadowImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemThumbnailShadowImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemThumbnailShadowImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_RarityTexImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_RarityTexImage = { "RarityTexImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, RarityTexImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_RarityTexImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_RarityTexImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_RarityTexAddImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_RarityTexAddImage = { "RarityTexAddImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, RarityTexAddImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_RarityTexAddImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_RarityTexAddImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_UnlockableItemRarityDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_UnlockableItemRarityDataTable = { "UnlockableItemRarityDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, UnlockableItemRarityDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_UnlockableItemRarityDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_UnlockableItemRarityDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, ItemId), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_DurabilityValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_DurabilityValue = { "DurabilityValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, DurabilityValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_DurabilityValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_DurabilityValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_PickupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_PickupType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_PickupType = { "PickupType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, PickupType), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_PickupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_PickupType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsEmptyFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsEmptyFlag_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_InventorySlot*)Obj)->IsEmptyFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsEmptyFlag = { "IsEmptyFlag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_InventorySlot), &Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsEmptyFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsEmptyFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsEmptyFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsSelected_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_InventorySlot*)Obj)->IsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsSelected = { "IsSelected", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_InventorySlot), &Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsWatchGameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InventorySlot" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InventorySlot.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsWatchGameMode_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_InventorySlot*)Obj)->IsWatchGameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsWatchGameMode = { "IsWatchGameMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_InventorySlot), &Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsWatchGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsWatchGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsWatchGameMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_StateActiveAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_StateInActiveAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_EmptyAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_DurabilityWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_GuideButtonWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemThumbnailTexImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemThumbnailShadowImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_RarityTexImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_RarityTexAddImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_UnlockableItemRarityDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_DurabilityValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_PickupType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_PickupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsEmptyFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::NewProp_IsWatchGameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_InventorySlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::ClassParams = {
		&UELSSWidgetHUD_InventorySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_InventorySlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_InventorySlot, 737550280);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_InventorySlot>()
	{
		return UELSSWidgetHUD_InventorySlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_InventorySlot(Z_Construct_UClass_UELSSWidgetHUD_InventorySlot, &UELSSWidgetHUD_InventorySlot::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_InventorySlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_InventorySlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
