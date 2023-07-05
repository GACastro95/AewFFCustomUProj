// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerHUBMenuItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerHUBMenuItem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerHUBMenuItem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerHUBMenuItem();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerItemData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemEffect();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerHubMenuDefaultTabBottomHelp();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemPurchaseState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerHUBMenuItemMode();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerHUBMenuItemOperation();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerHUBMenuItem::execCanPurchaseItem)
	{
		P_GET_STRUCT_REF(FCareerItemData,Z_Param_Out_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPurchaseItem(Z_Param_Out_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuItem::execCheckMomentumEffect)
	{
		P_GET_STRUCT_REF(FCareerItemData,Z_Param_Out_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerItemEffect*)Z_Param__Result=P_THIS->CheckMomentumEffect(Z_Param_Out_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuItem::execGetItemPrice)
	{
		P_GET_STRUCT_REF(FCareerItemData,Z_Param_Out_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemPrice(Z_Param_Out_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuItem::execGetPurchasableTShirt)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UniqueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPurchasableTShirt(Z_Param_Out_UniqueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuItem::execGetPurchaseItemState)
	{
		P_GET_STRUCT_REF(FCareerItemData,Z_Param_Out_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerItemPurchaseState*)Z_Param__Result=P_THIS->GetPurchaseItemState(Z_Param_Out_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuItem::execIsMenuTop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMenuTop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuItem::execOnHoverdCursor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InCursorIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHoverdCursor(Z_Param_InCursorIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuItem::execOpenMenuLR)
	{
		P_GET_UBOOL(Z_Param__bOpenDirLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenMenuLR(Z_Param__bOpenDirLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuItem::execPurchaseItem)
	{
		P_GET_STRUCT_REF(FCareerItemData,Z_Param_Out_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PurchaseItem(Z_Param_Out_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuItem::execSetCanMoveCursor)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanMoveCursor(Z_Param_bFlag);
		P_NATIVE_END;
	}
	static FName NAME_UELCareerHUBMenuItem_DefaultTabBottomHelp = FName(TEXT("DefaultTabBottomHelp"));
	void UELCareerHUBMenuItem::DefaultTabBottomHelp(ECareerHubMenuDefaultTabBottomHelp eDefaultTabBottomHelp)
	{
		ELCareerHUBMenuItem_eventDefaultTabBottomHelp_Parms Parms;
		Parms.eDefaultTabBottomHelp=eDefaultTabBottomHelp;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuItem_DefaultTabBottomHelp),&Parms);
	}
	static FName NAME_UELCareerHUBMenuItem_ItemOutAnimation = FName(TEXT("ItemOutAnimation"));
	void UELCareerHUBMenuItem::ItemOutAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuItem_ItemOutAnimation),NULL);
	}
	static FName NAME_UELCareerHUBMenuItem_OnCancelHoldDecision = FName(TEXT("OnCancelHoldDecision"));
	void UELCareerHUBMenuItem::OnCancelHoldDecision()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuItem_OnCancelHoldDecision),NULL);
	}
	static FName NAME_UELCareerHUBMenuItem_OnChangeSaveAndExit = FName(TEXT("OnChangeSaveAndExit"));
	void UELCareerHUBMenuItem::OnChangeSaveAndExit(bool bFlag)
	{
		ELCareerHUBMenuItem_eventOnChangeSaveAndExit_Parms Parms;
		Parms.bFlag=bFlag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuItem_OnChangeSaveAndExit),&Parms);
	}
	static FName NAME_UELCareerHUBMenuItem_OnPressedMoveTab = FName(TEXT("OnPressedMoveTab"));
	void UELCareerHUBMenuItem::OnPressedMoveTab(bool _isLeft)
	{
		ELCareerHUBMenuItem_eventOnPressedMoveTab_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuItem_OnPressedMoveTab),&Parms);
	}
	void UELCareerHUBMenuItem::StaticRegisterNativesUELCareerHUBMenuItem()
	{
		UClass* Class = UELCareerHUBMenuItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPurchaseItem", &UELCareerHUBMenuItem::execCanPurchaseItem },
			{ "CheckMomentumEffect", &UELCareerHUBMenuItem::execCheckMomentumEffect },
			{ "GetItemPrice", &UELCareerHUBMenuItem::execGetItemPrice },
			{ "GetPurchasableTShirt", &UELCareerHUBMenuItem::execGetPurchasableTShirt },
			{ "GetPurchaseItemState", &UELCareerHUBMenuItem::execGetPurchaseItemState },
			{ "IsMenuTop", &UELCareerHUBMenuItem::execIsMenuTop },
			{ "OnHoverdCursor", &UELCareerHUBMenuItem::execOnHoverdCursor },
			{ "OpenMenuLR", &UELCareerHUBMenuItem::execOpenMenuLR },
			{ "PurchaseItem", &UELCareerHUBMenuItem::execPurchaseItem },
			{ "SetCanMoveCursor", &UELCareerHUBMenuItem::execSetCanMoveCursor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics
	{
		struct ELCareerHUBMenuItem_eventCanPurchaseItem_Parms
		{
			FCareerItemData ItemData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventCanPurchaseItem_Parms, ItemData), Z_Construct_UScriptStruct_FCareerItemData, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::NewProp_ItemData_MetaData)) };
	void Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerHUBMenuItem_eventCanPurchaseItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuItem_eventCanPurchaseItem_Parms), &Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "CanPurchaseItem", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventCanPurchaseItem_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics
	{
		struct ELCareerHUBMenuItem_eventCheckMomentumEffect_Parms
		{
			FCareerItemData ItemData;
			ECareerItemEffect ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventCheckMomentumEffect_Parms, ItemData), Z_Construct_UScriptStruct_FCareerItemData, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::NewProp_ItemData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventCheckMomentumEffect_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerItemEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "CheckMomentumEffect", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventCheckMomentumEffect_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eDefaultTabBottomHelp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eDefaultTabBottomHelp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp = { "eDefaultTabBottomHelp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventDefaultTabBottomHelp_Parms, eDefaultTabBottomHelp), Z_Construct_UEnum_ABP_200508_ECareerHubMenuDefaultTabBottomHelp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "DefaultTabBottomHelp", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventDefaultTabBottomHelp_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics
	{
		struct ELCareerHUBMenuItem_eventGetItemPrice_Parms
		{
			FCareerItemData ItemData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventGetItemPrice_Parms, ItemData), Z_Construct_UScriptStruct_FCareerItemData, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::NewProp_ItemData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventGetItemPrice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "GetItemPrice", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventGetItemPrice_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics
	{
		struct ELCareerHUBMenuItem_eventGetPurchasableTShirt_Parms
		{
			int32 UniqueID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventGetPurchasableTShirt_Parms, UniqueID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerHUBMenuItem_eventGetPurchasableTShirt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuItem_eventGetPurchasableTShirt_Parms), &Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "GetPurchasableTShirt", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventGetPurchasableTShirt_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics
	{
		struct ELCareerHUBMenuItem_eventGetPurchaseItemState_Parms
		{
			FCareerItemData ItemData;
			ECareerItemPurchaseState ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventGetPurchaseItemState_Parms, ItemData), Z_Construct_UScriptStruct_FCareerItemData, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::NewProp_ItemData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventGetPurchaseItemState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerItemPurchaseState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "GetPurchaseItemState", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventGetPurchaseItemState_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics
	{
		struct ELCareerHUBMenuItem_eventIsMenuTop_Parms
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
	void Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerHUBMenuItem_eventIsMenuTop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuItem_eventIsMenuTop_Parms), &Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "IsMenuTop", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventIsMenuTop_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_ItemOutAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_ItemOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_ItemOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "ItemOutAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_ItemOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_ItemOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_ItemOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_ItemOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_OnCancelHoldDecision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_OnCancelHoldDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_OnCancelHoldDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "OnCancelHoldDecision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_OnCancelHoldDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_OnCancelHoldDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_OnCancelHoldDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_OnCancelHoldDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics
	{
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerHUBMenuItem_eventOnChangeSaveAndExit_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuItem_eventOnChangeSaveAndExit_Parms), &Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "OnChangeSaveAndExit", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventOnChangeSaveAndExit_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics
	{
		struct ELCareerHUBMenuItem_eventOnHoverdCursor_Parms
		{
			int32 InCursorIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InCursorIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics::NewProp_InCursorIndex = { "InCursorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventOnHoverdCursor_Parms, InCursorIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics::NewProp_InCursorIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "OnHoverdCursor", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventOnHoverdCursor_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELCareerHUBMenuItem_eventOnPressedMoveTab_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuItem_eventOnPressedMoveTab_Parms), &Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "OnPressedMoveTab", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventOnPressedMoveTab_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics
	{
		struct ELCareerHUBMenuItem_eventOpenMenuLR_Parms
		{
			bool _bOpenDirLeft;
		};
		static void NewProp__bOpenDirLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bOpenDirLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::NewProp__bOpenDirLeft_SetBit(void* Obj)
	{
		((ELCareerHUBMenuItem_eventOpenMenuLR_Parms*)Obj)->_bOpenDirLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::NewProp__bOpenDirLeft = { "_bOpenDirLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuItem_eventOpenMenuLR_Parms), &Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::NewProp__bOpenDirLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::NewProp__bOpenDirLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "OpenMenuLR", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventOpenMenuLR_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics
	{
		struct ELCareerHUBMenuItem_eventPurchaseItem_Parms
		{
			FCareerItemData ItemData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuItem_eventPurchaseItem_Parms, ItemData), Z_Construct_UScriptStruct_FCareerItemData, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::NewProp_ItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::NewProp_ItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "PurchaseItem", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventPurchaseItem_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics
	{
		struct ELCareerHUBMenuItem_eventSetCanMoveCursor_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerHUBMenuItem_eventSetCanMoveCursor_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuItem_eventSetCanMoveCursor_Parms), &Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuItem, nullptr, "SetCanMoveCursor", nullptr, nullptr, sizeof(ELCareerHUBMenuItem_eventSetCanMoveCursor_Parms), Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerHUBMenuItem_NoRegister()
	{
		return UELCareerHUBMenuItem::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerHUBMenuItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumHorizontalItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumHorizontalItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumVerticalItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumVerticalItems;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TShirtData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TShirtData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bOpenDirLeft_MetaData[];
#endif
		static void NewProp_m_bOpenDirLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bOpenDirLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerHUBMenuItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerHUBMenuItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_CanPurchaseItem, "CanPurchaseItem" }, // 4164866435
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_CheckMomentumEffect, "CheckMomentumEffect" }, // 2799115379
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_DefaultTabBottomHelp, "DefaultTabBottomHelp" }, // 1274992751
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_GetItemPrice, "GetItemPrice" }, // 20697317
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchasableTShirt, "GetPurchasableTShirt" }, // 1375506132
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_GetPurchaseItemState, "GetPurchaseItemState" }, // 3991589459
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_IsMenuTop, "IsMenuTop" }, // 636653555
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_ItemOutAnimation, "ItemOutAnimation" }, // 1537575095
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_OnCancelHoldDecision, "OnCancelHoldDecision" }, // 3222965147
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_OnChangeSaveAndExit, "OnChangeSaveAndExit" }, // 3441528253
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_OnHoverdCursor, "OnHoverdCursor" }, // 3515324466
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_OnPressedMoveTab, "OnPressedMoveTab" }, // 2613294304
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_OpenMenuLR, "OpenMenuLR" }, // 2636023031
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_PurchaseItem, "PurchaseItem" }, // 1746149788
		{ &Z_Construct_UFunction_UELCareerHUBMenuItem_SetCanMoveCursor, "SetCanMoveCursor" }, // 3792865877
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerHUBMenuItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_NumHorizontalItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerHUBMenuItem" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_NumHorizontalItems = { "NumHorizontalItems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerHUBMenuItem, NumHorizontalItems), METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_NumHorizontalItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_NumHorizontalItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_NumVerticalItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerHUBMenuItem" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_NumVerticalItems = { "NumVerticalItems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerHUBMenuItem, NumVerticalItems), METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_NumVerticalItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_NumVerticalItems_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_CurrentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_CurrentMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerHUBMenuItem" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_CurrentMode = { "CurrentMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerHUBMenuItem, CurrentMode), Z_Construct_UEnum_ABP_200508_ECareerHUBMenuItemMode, METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_CurrentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_CurrentMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_Operation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerHUBMenuItem" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerHUBMenuItem, Operation), Z_Construct_UEnum_ABP_200508_ECareerHUBMenuItemOperation, METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_Operation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_TShirtData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerHUBMenuItem" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_TShirtData = { "TShirtData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerHUBMenuItem, TShirtData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_TShirtData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_TShirtData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_m_bOpenDirLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerHUBMenuItem" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuItem.h" },
	};
#endif
	void Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_m_bOpenDirLeft_SetBit(void* Obj)
	{
		((UELCareerHUBMenuItem*)Obj)->m_bOpenDirLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_m_bOpenDirLeft = { "m_bOpenDirLeft", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELCareerHUBMenuItem), &Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_m_bOpenDirLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_m_bOpenDirLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_m_bOpenDirLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCareerHUBMenuItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_NumHorizontalItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_NumVerticalItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_CurrentMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_CurrentMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_Operation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_Operation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_TShirtData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerHUBMenuItem_Statics::NewProp_m_bOpenDirLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerHUBMenuItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerHUBMenuItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerHUBMenuItem_Statics::ClassParams = {
		&UELCareerHUBMenuItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCareerHUBMenuItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerHUBMenuItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerHUBMenuItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerHUBMenuItem, 4110234415);
	template<> ABP_200508_API UClass* StaticClass<UELCareerHUBMenuItem>()
	{
		return UELCareerHUBMenuItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerHUBMenuItem(Z_Construct_UClass_UELCareerHUBMenuItem, &UELCareerHUBMenuItem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerHUBMenuItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerHUBMenuItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
