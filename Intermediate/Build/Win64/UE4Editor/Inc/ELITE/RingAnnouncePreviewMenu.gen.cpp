// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/RingAnnouncePreviewMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRingAnnouncePreviewMenu() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_ARingAnnouncePreviewMenu_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_ARingAnnouncePreviewMenu();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UFunction* Z_Construct_UDelegateFunction_ELITE_RingAnnouncePreview_Button_Delegate__DelegateSignature();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_SceneData_Type();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_MatchRule();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_Championship();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Order();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Gender();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_ChampionState();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_CutScene_Type();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_RosterName();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_TeamName();
// End Cross Module References
	DEFINE_FUNCTION(ARingAnnouncePreviewMenu::execChangeNextState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeNextState();
		P_NATIVE_END;
	}
	void ARingAnnouncePreviewMenu::StaticRegisterNativesARingAnnouncePreviewMenu()
	{
		UClass* Class = ARingAnnouncePreviewMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeNextState", &ARingAnnouncePreviewMenu::execChangeNextState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARingAnnouncePreviewMenu_ChangeNextState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARingAnnouncePreviewMenu_ChangeNextState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARingAnnouncePreviewMenu_ChangeNextState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARingAnnouncePreviewMenu, nullptr, "ChangeNextState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARingAnnouncePreviewMenu_ChangeNextState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARingAnnouncePreviewMenu_ChangeNextState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARingAnnouncePreviewMenu_ChangeNextState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARingAnnouncePreviewMenu_ChangeNextState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARingAnnouncePreviewMenu_NoRegister()
	{
		return ARingAnnouncePreviewMenu::StaticClass();
	}
	struct Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Play_Dispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Play_Dispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Return_Dispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Return_Dispatcher;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RA_SceneData_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RA_SceneData_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RA_SceneData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RA_Slot_MatchRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RA_Slot_MatchRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RA_Slot_MatchRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RA_Slot_Championship_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RA_Slot_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RA_Slot_Championship;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RA_SlotIntro_Order_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RA_SlotIntro_Order_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RA_SlotIntro_Order;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RA_SlotIntro_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RA_SlotIntro_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RA_SlotIntro_Gender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RA_Slot_ChampionState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RA_Slot_ChampionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RA_Slot_ChampionState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RA_Slot_CutScene_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RA_Slot_CutScene_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RA_Slot_CutScene_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RA_Slot_RosterName_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RA_Slot_RosterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RA_Slot_RosterName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RA_Slot_TeamName_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RA_Slot_TeamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RA_Slot_TeamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPlay_MetaData[];
#endif
		static void NewProp_AutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARingAnnouncePreviewMenu_ChangeNextState, "ChangeNextState" }, // 1132185859
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RingAnnouncePreviewMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_Play_Dispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_Play_Dispatcher = { "Play_Dispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, Play_Dispatcher), Z_Construct_UDelegateFunction_ELITE_RingAnnouncePreview_Button_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_Play_Dispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_Play_Dispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_Return_Dispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_Return_Dispatcher = { "Return_Dispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, Return_Dispatcher), Z_Construct_UDelegateFunction_ELITE_RingAnnouncePreview_Button_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_Return_Dispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_Return_Dispatcher_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SceneData_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SceneData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SceneData = { "RA_SceneData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, RA_SceneData), Z_Construct_UEnum_ELITE_Game_ERA_SceneData_Type, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SceneData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SceneData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_MatchRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_MatchRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_MatchRule = { "RA_Slot_MatchRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, RA_Slot_MatchRule), Z_Construct_UEnum_ELITE_Game_ERA_Slot_MatchRule, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_MatchRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_MatchRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_Championship_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_Championship = { "RA_Slot_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, RA_Slot_Championship), Z_Construct_UEnum_ELITE_Game_ERA_Slot_Championship, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_Championship_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Order_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Order_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Order = { "RA_SlotIntro_Order", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, RA_SlotIntro_Order), Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Order, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Order_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Order_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Gender_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Gender = { "RA_SlotIntro_Gender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, RA_SlotIntro_Gender), Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Gender, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Gender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_ChampionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_ChampionState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_ChampionState = { "RA_Slot_ChampionState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, RA_Slot_ChampionState), Z_Construct_UEnum_ELITE_Game_ERA_Slot_ChampionState, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_ChampionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_ChampionState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_CutScene_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_CutScene_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_CutScene_Type = { "RA_Slot_CutScene_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, RA_Slot_CutScene_Type), Z_Construct_UEnum_ELITE_Game_ERA_Slot_CutScene_Type, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_CutScene_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_CutScene_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_RosterName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_RosterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_RosterName = { "RA_Slot_RosterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, RA_Slot_RosterName), Z_Construct_UEnum_ELITE_Game_ERA_Slot_RosterName, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_RosterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_RosterName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_TeamName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_TeamName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_TeamName = { "RA_Slot_TeamName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARingAnnouncePreviewMenu, RA_Slot_TeamName), Z_Construct_UEnum_ELITE_Game_ERA_Slot_TeamName, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_TeamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_TeamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_AutoPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RingAnnouncePreviewMenu" },
		{ "ModuleRelativePath", "Public/RingAnnouncePreviewMenu.h" },
	};
#endif
	void Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_AutoPlay_SetBit(void* Obj)
	{
		((ARingAnnouncePreviewMenu*)Obj)->AutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_AutoPlay = { "AutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARingAnnouncePreviewMenu), &Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_AutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_AutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_AutoPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_Play_Dispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_Return_Dispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SceneData_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SceneData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_MatchRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_MatchRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_Championship_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Order_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_SlotIntro_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_ChampionState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_ChampionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_CutScene_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_CutScene_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_RosterName_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_RosterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_TeamName_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_RA_Slot_TeamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::NewProp_AutoPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARingAnnouncePreviewMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::ClassParams = {
		&ARingAnnouncePreviewMenu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARingAnnouncePreviewMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARingAnnouncePreviewMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARingAnnouncePreviewMenu, 1037581850);
	template<> ELITE_API UClass* StaticClass<ARingAnnouncePreviewMenu>()
	{
		return ARingAnnouncePreviewMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARingAnnouncePreviewMenu(Z_Construct_UClass_ARingAnnouncePreviewMenu, &ARingAnnouncePreviewMenu::StaticClass, TEXT("/Script/ELITE"), TEXT("ARingAnnouncePreviewMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARingAnnouncePreviewMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
