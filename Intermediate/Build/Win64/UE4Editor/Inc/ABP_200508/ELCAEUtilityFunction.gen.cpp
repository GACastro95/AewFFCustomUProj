// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCAEUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCAEUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCAEUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCAEUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FJukeBoxParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELUnlockableItemManagerBase_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELCAEMenuItemInfo();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELRefUnlockableItemInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCAEUtilityFunction::execCanSelectableMusic)
	{
		P_GET_STRUCT_REF(FJukeBoxParam,Z_Param_Out_JukeBoxParam);
		P_GET_OBJECT(UELUnlockableItemManagerBase,Z_Param_UnlockableItemManager);
		P_GET_TARRAY(EWrestlerID_N,Z_Param_CurrentWrestlers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELCAEUtilityFunction::CanSelectableMusic(Z_Param_Out_JukeBoxParam,Z_Param_UnlockableItemManager,Z_Param_CurrentWrestlers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAEUtilityFunction::execGetUnlockableItemInfo)
	{
		P_GET_TARRAY_REF(FELCAEMenuItemInfo,Z_Param_Out_UnlockItems);
		P_GET_OBJECT(UELUnlockableItemManagerBase,Z_Param_UnlockableItemManager);
		P_GET_TARRAY_REF(FELRefUnlockableItemInfo,Z_Param_Out_UnlockableItemInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELCAEUtilityFunction::GetUnlockableItemInfo(Z_Param_Out_UnlockItems,Z_Param_UnlockableItemManager,Z_Param_Out_UnlockableItemInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAEUtilityFunction::execMakeSelectableAnimationList)
	{
		P_GET_OBJECT(UDataTable,Z_Param_EntranceAnimationDataTable);
		P_GET_OBJECT(UELUnlockableItemManagerBase,Z_Param_UnlockableItemManager);
		P_GET_UBOOL(Z_Param_ChampionAnimation);
		P_GET_UBOOL(Z_Param_Single);
		P_GET_TARRAY_REF(FELCAEMenuItemInfo,Z_Param_Out_Animations);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELCAEUtilityFunction::MakeSelectableAnimationList(Z_Param_EntranceAnimationDataTable,Z_Param_UnlockableItemManager,Z_Param_ChampionAnimation,Z_Param_Single,Z_Param_Out_Animations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAEUtilityFunction::execMakeSelectableMusicList)
	{
		P_GET_OBJECT(UDataTable,Z_Param_MusicListDataTable);
		P_GET_TARRAY(EWrestlerID_N,Z_Param_CurrentWrestlers);
		P_GET_TARRAY_REF(FJukeBoxParam,Z_Param_Out_MusicList);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELCAEUtilityFunction::MakeSelectableMusicList(Z_Param_MusicListDataTable,Z_Param_CurrentWrestlers,Z_Param_Out_MusicList,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAEUtilityFunction::execSortUnlockableItems)
	{
		P_GET_TARRAY_REF(FELCAEMenuItemInfo,Z_Param_Out_UnlockItems);
		P_GET_OBJECT(UELUnlockableItemManagerBase,Z_Param_UnlockableItemManager);
		P_GET_TARRAY_REF(FELCAEMenuItemInfo,Z_Param_Out_SortedItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELCAEUtilityFunction::SortUnlockableItems(Z_Param_Out_UnlockItems,Z_Param_UnlockableItemManager,Z_Param_Out_SortedItems);
		P_NATIVE_END;
	}
	void UELCAEUtilityFunction::StaticRegisterNativesUELCAEUtilityFunction()
	{
		UClass* Class = UELCAEUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSelectableMusic", &UELCAEUtilityFunction::execCanSelectableMusic },
			{ "GetUnlockableItemInfo", &UELCAEUtilityFunction::execGetUnlockableItemInfo },
			{ "MakeSelectableAnimationList", &UELCAEUtilityFunction::execMakeSelectableAnimationList },
			{ "MakeSelectableMusicList", &UELCAEUtilityFunction::execMakeSelectableMusicList },
			{ "SortUnlockableItems", &UELCAEUtilityFunction::execSortUnlockableItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics
	{
		struct ELCAEUtilityFunction_eventCanSelectableMusic_Parms
		{
			FJukeBoxParam JukeBoxParam;
			UELUnlockableItemManagerBase* UnlockableItemManager;
			TArray<EWrestlerID_N> CurrentWrestlers;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JukeBoxParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JukeBoxParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockableItemManager;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentWrestlers_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentWrestlers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentWrestlers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_JukeBoxParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_JukeBoxParam = { "JukeBoxParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventCanSelectableMusic_Parms, JukeBoxParam), Z_Construct_UScriptStruct_FJukeBoxParam, METADATA_PARAMS(Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_JukeBoxParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_JukeBoxParam_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_UnlockableItemManager = { "UnlockableItemManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventCanSelectableMusic_Parms, UnlockableItemManager), Z_Construct_UClass_UELUnlockableItemManagerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_CurrentWrestlers_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_CurrentWrestlers_Inner = { "CurrentWrestlers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_CurrentWrestlers = { "CurrentWrestlers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventCanSelectableMusic_Parms, CurrentWrestlers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCAEUtilityFunction_eventCanSelectableMusic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAEUtilityFunction_eventCanSelectableMusic_Parms), &Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_JukeBoxParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_UnlockableItemManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_CurrentWrestlers_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_CurrentWrestlers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_CurrentWrestlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAEUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAEUtilityFunction, nullptr, "CanSelectableMusic", nullptr, nullptr, sizeof(ELCAEUtilityFunction_eventCanSelectableMusic_Parms), Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics
	{
		struct ELCAEUtilityFunction_eventGetUnlockableItemInfo_Parms
		{
			TArray<FELCAEMenuItemInfo> UnlockItems;
			UELUnlockableItemManagerBase* UnlockableItemManager;
			TArray<FELRefUnlockableItemInfo> UnlockableItemInfos;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnlockItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnlockItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockableItemManager;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnlockableItemInfos_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnlockableItemInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockItems_Inner = { "UnlockItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELCAEMenuItemInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockItems = { "UnlockItems", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventGetUnlockableItemInfo_Parms, UnlockItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockableItemManager = { "UnlockableItemManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventGetUnlockableItemInfo_Parms, UnlockableItemManager), Z_Construct_UClass_UELUnlockableItemManagerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockableItemInfos_Inner = { "UnlockableItemInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELRefUnlockableItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockableItemInfos = { "UnlockableItemInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventGetUnlockableItemInfo_Parms, UnlockableItemInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockableItemManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockableItemInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::NewProp_UnlockableItemInfos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAEUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAEUtilityFunction, nullptr, "GetUnlockableItemInfo", nullptr, nullptr, sizeof(ELCAEUtilityFunction_eventGetUnlockableItemInfo_Parms), Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics
	{
		struct ELCAEUtilityFunction_eventMakeSelectableAnimationList_Parms
		{
			UDataTable* EntranceAnimationDataTable;
			UELUnlockableItemManagerBase* UnlockableItemManager;
			bool ChampionAnimation;
			bool Single;
			TArray<FELCAEMenuItemInfo> Animations;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceAnimationDataTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockableItemManager;
		static void NewProp_ChampionAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChampionAnimation;
		static void NewProp_Single_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Single;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Animations_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Animations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_EntranceAnimationDataTable = { "EntranceAnimationDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventMakeSelectableAnimationList_Parms, EntranceAnimationDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_UnlockableItemManager = { "UnlockableItemManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventMakeSelectableAnimationList_Parms, UnlockableItemManager), Z_Construct_UClass_UELUnlockableItemManagerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_ChampionAnimation_SetBit(void* Obj)
	{
		((ELCAEUtilityFunction_eventMakeSelectableAnimationList_Parms*)Obj)->ChampionAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_ChampionAnimation = { "ChampionAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAEUtilityFunction_eventMakeSelectableAnimationList_Parms), &Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_ChampionAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_Single_SetBit(void* Obj)
	{
		((ELCAEUtilityFunction_eventMakeSelectableAnimationList_Parms*)Obj)->Single = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_Single = { "Single", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAEUtilityFunction_eventMakeSelectableAnimationList_Parms), &Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_Single_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELCAEMenuItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventMakeSelectableAnimationList_Parms, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_EntranceAnimationDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_UnlockableItemManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_ChampionAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_Single,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_Animations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::NewProp_Animations,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAEUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAEUtilityFunction, nullptr, "MakeSelectableAnimationList", nullptr, nullptr, sizeof(ELCAEUtilityFunction_eventMakeSelectableAnimationList_Parms), Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics
	{
		struct ELCAEUtilityFunction_eventMakeSelectableMusicList_Parms
		{
			UDataTable* MusicListDataTable;
			TArray<EWrestlerID_N> CurrentWrestlers;
			TArray<FJukeBoxParam> MusicList;
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MusicListDataTable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentWrestlers_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentWrestlers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentWrestlers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MusicList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MusicList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_MusicListDataTable = { "MusicListDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventMakeSelectableMusicList_Parms, MusicListDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_CurrentWrestlers_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_CurrentWrestlers_Inner = { "CurrentWrestlers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_CurrentWrestlers = { "CurrentWrestlers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventMakeSelectableMusicList_Parms, CurrentWrestlers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_MusicList_Inner = { "MusicList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJukeBoxParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_MusicList = { "MusicList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventMakeSelectableMusicList_Parms, MusicList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventMakeSelectableMusicList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_MusicListDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_CurrentWrestlers_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_CurrentWrestlers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_CurrentWrestlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_MusicList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_MusicList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAEUtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAEUtilityFunction, nullptr, "MakeSelectableMusicList", nullptr, nullptr, sizeof(ELCAEUtilityFunction_eventMakeSelectableMusicList_Parms), Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics
	{
		struct ELCAEUtilityFunction_eventSortUnlockableItems_Parms
		{
			TArray<FELCAEMenuItemInfo> UnlockItems;
			UELUnlockableItemManagerBase* UnlockableItemManager;
			TArray<FELCAEMenuItemInfo> SortedItems;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnlockItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnlockItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockableItemManager;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortedItems_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_UnlockItems_Inner = { "UnlockItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELCAEMenuItemInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_UnlockItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_UnlockItems = { "UnlockItems", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventSortUnlockableItems_Parms, UnlockItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_UnlockItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_UnlockItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_UnlockableItemManager = { "UnlockableItemManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventSortUnlockableItems_Parms, UnlockableItemManager), Z_Construct_UClass_UELUnlockableItemManagerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_SortedItems_Inner = { "SortedItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELCAEMenuItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_SortedItems = { "SortedItems", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEUtilityFunction_eventSortUnlockableItems_Parms, SortedItems), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_UnlockItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_UnlockItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_UnlockableItemManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_SortedItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::NewProp_SortedItems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAEUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAEUtilityFunction, nullptr, "SortUnlockableItems", nullptr, nullptr, sizeof(ELCAEUtilityFunction_eventSortUnlockableItems_Parms), Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCAEUtilityFunction_NoRegister()
	{
		return UELCAEUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELCAEUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCAEUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCAEUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCAEUtilityFunction_CanSelectableMusic, "CanSelectableMusic" }, // 4041018228
		{ &Z_Construct_UFunction_UELCAEUtilityFunction_GetUnlockableItemInfo, "GetUnlockableItemInfo" }, // 711337867
		{ &Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableAnimationList, "MakeSelectableAnimationList" }, // 70656739
		{ &Z_Construct_UFunction_UELCAEUtilityFunction_MakeSelectableMusicList, "MakeSelectableMusicList" }, // 3260586950
		{ &Z_Construct_UFunction_UELCAEUtilityFunction_SortUnlockableItems, "SortUnlockableItems" }, // 409373749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAEUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCAEUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCAEUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCAEUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCAEUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCAEUtilityFunction_Statics::ClassParams = {
		&UELCAEUtilityFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCAEUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCAEUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCAEUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCAEUtilityFunction, 472350578);
	template<> ABP_200508_API UClass* StaticClass<UELCAEUtilityFunction>()
	{
		return UELCAEUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCAEUtilityFunction(Z_Construct_UClass_UELCAEUtilityFunction, &UELCAEUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCAEUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCAEUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
