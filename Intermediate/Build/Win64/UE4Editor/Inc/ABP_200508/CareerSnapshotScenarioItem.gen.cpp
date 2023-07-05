// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerSnapshotScenarioItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerSnapshotScenarioItem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshotScenarioItem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshotScenarioItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioNo();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshotTitleItem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execCollectSnapshots)
	{
		P_GET_TARRAY_REF(UCareerSnapshot*,Z_Param_Out_Snapshots);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectSnapshots(Z_Param_Out_Snapshots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execConstractTitles)
	{
		P_GET_OBJECT(UDataTable,Z_Param_TitleDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstractTitles(Z_Param_TitleDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execGetRecentSnapshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCareerSnapshot**)Z_Param__Result=P_THIS->GetRecentSnapshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execGetScenarioNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerScenarioNo*)Z_Param__Result=P_THIS->GetScenarioNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execGetScenarioText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetScenarioText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execGetSnapshotsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSnapshotsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execGetTitleItems)
	{
		P_GET_TARRAY_REF(UCareerSnapshotTitleItem*,Z_Param_Out_OutTitleItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTitleItems(Z_Param_Out_OutTitleItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execGetTitlesNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTitlesNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execGetUnlockedTitlesNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUnlockedTitlesNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execInit)
	{
		P_GET_ENUM(ECareerScenarioNo,Z_Param_No);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(ECareerScenarioNo(Z_Param_No));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotScenarioItem::execRemoveSnapshot)
	{
		P_GET_OBJECT(UCareerSnapshot,Z_Param_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSnapshot(Z_Param_Snapshot);
		P_NATIVE_END;
	}
	void UCareerSnapshotScenarioItem::StaticRegisterNativesUCareerSnapshotScenarioItem()
	{
		UClass* Class = UCareerSnapshotScenarioItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectSnapshots", &UCareerSnapshotScenarioItem::execCollectSnapshots },
			{ "ConstractTitles", &UCareerSnapshotScenarioItem::execConstractTitles },
			{ "GetRecentSnapshot", &UCareerSnapshotScenarioItem::execGetRecentSnapshot },
			{ "GetScenarioNo", &UCareerSnapshotScenarioItem::execGetScenarioNo },
			{ "GetScenarioText", &UCareerSnapshotScenarioItem::execGetScenarioText },
			{ "GetSnapshotsNum", &UCareerSnapshotScenarioItem::execGetSnapshotsNum },
			{ "GetTitleItems", &UCareerSnapshotScenarioItem::execGetTitleItems },
			{ "GetTitlesNum", &UCareerSnapshotScenarioItem::execGetTitlesNum },
			{ "GetUnlockedTitlesNum", &UCareerSnapshotScenarioItem::execGetUnlockedTitlesNum },
			{ "Init", &UCareerSnapshotScenarioItem::execInit },
			{ "RemoveSnapshot", &UCareerSnapshotScenarioItem::execRemoveSnapshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics
	{
		struct CareerSnapshotScenarioItem_eventCollectSnapshots_Parms
		{
			TArray<UCareerSnapshot*> Snapshots;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::NewProp_Snapshots_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventCollectSnapshots_Parms, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::NewProp_Snapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::NewProp_Snapshots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::NewProp_Snapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::NewProp_Snapshots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "CollectSnapshots", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventCollectSnapshots_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics
	{
		struct CareerSnapshotScenarioItem_eventConstractTitles_Parms
		{
			const UDataTable* TitleDataTable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::NewProp_TitleDataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::NewProp_TitleDataTable = { "TitleDataTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventConstractTitles_Parms, TitleDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::NewProp_TitleDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::NewProp_TitleDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::NewProp_TitleDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "ConstractTitles", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventConstractTitles_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics
	{
		struct CareerSnapshotScenarioItem_eventGetRecentSnapshot_Parms
		{
			UCareerSnapshot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventGetRecentSnapshot_Parms, ReturnValue), Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "GetRecentSnapshot", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventGetRecentSnapshot_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics
	{
		struct CareerSnapshotScenarioItem_eventGetScenarioNo_Parms
		{
			ECareerScenarioNo ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventGetScenarioNo_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerScenarioNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "GetScenarioNo", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventGetScenarioNo_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics
	{
		struct CareerSnapshotScenarioItem_eventGetScenarioText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventGetScenarioText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "GetScenarioText", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventGetScenarioText_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics
	{
		struct CareerSnapshotScenarioItem_eventGetSnapshotsNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventGetSnapshotsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "GetSnapshotsNum", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventGetSnapshotsNum_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics
	{
		struct CareerSnapshotScenarioItem_eventGetTitleItems_Parms
		{
			TArray<UCareerSnapshotTitleItem*> OutTitleItems;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTitleItems_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTitleItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::NewProp_OutTitleItems_Inner = { "OutTitleItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshotTitleItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::NewProp_OutTitleItems = { "OutTitleItems", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventGetTitleItems_Parms, OutTitleItems), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::NewProp_OutTitleItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::NewProp_OutTitleItems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "GetTitleItems", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventGetTitleItems_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics
	{
		struct CareerSnapshotScenarioItem_eventGetTitlesNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventGetTitlesNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "GetTitlesNum", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventGetTitlesNum_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics
	{
		struct CareerSnapshotScenarioItem_eventGetUnlockedTitlesNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventGetUnlockedTitlesNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "GetUnlockedTitlesNum", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventGetUnlockedTitlesNum_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics
	{
		struct CareerSnapshotScenarioItem_eventInit_Parms
		{
			ECareerScenarioNo No;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_No_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::NewProp_No_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventInit_Parms, No), Z_Construct_UEnum_ABP_200508_ECareerScenarioNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::NewProp_No_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::NewProp_No,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "Init", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventInit_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics
	{
		struct CareerSnapshotScenarioItem_eventRemoveSnapshot_Parms
		{
			UCareerSnapshot* Snapshot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotScenarioItem_eventRemoveSnapshot_Parms, Snapshot), Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics::NewProp_Snapshot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotScenarioItem, nullptr, "RemoveSnapshot", nullptr, nullptr, sizeof(CareerSnapshotScenarioItem_eventRemoveSnapshot_Parms), Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCareerSnapshotScenarioItem_NoRegister()
	{
		return UCareerSnapshotScenarioItem::StaticClass();
	}
	struct Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TitleItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_CollectSnapshots, "CollectSnapshots" }, // 2323366732
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_ConstractTitles, "ConstractTitles" }, // 1934150677
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetRecentSnapshot, "GetRecentSnapshot" }, // 1728033779
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioNo, "GetScenarioNo" }, // 3505302118
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetScenarioText, "GetScenarioText" }, // 2481782529
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetSnapshotsNum, "GetSnapshotsNum" }, // 3126921200
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitleItems, "GetTitleItems" }, // 3009549351
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetTitlesNum, "GetTitlesNum" }, // 994627330
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_GetUnlockedTitlesNum, "GetUnlockedTitlesNum" }, // 3184134127
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_Init, "Init" }, // 741271224
		{ &Z_Construct_UFunction_UCareerSnapshotScenarioItem_RemoveSnapshot, "RemoveSnapshot" }, // 1354769733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CareerSnapshotScenarioItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::NewProp_TitleItems_Inner = { "TitleItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshotTitleItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::NewProp_TitleItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotScenarioItem" },
		{ "ModuleRelativePath", "Public/CareerSnapshotScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::NewProp_TitleItems = { "TitleItems", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCareerSnapshotScenarioItem, TitleItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::NewProp_TitleItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::NewProp_TitleItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::NewProp_TitleItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::NewProp_TitleItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCareerSnapshotScenarioItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::ClassParams = {
		&UCareerSnapshotScenarioItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCareerSnapshotScenarioItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCareerSnapshotScenarioItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCareerSnapshotScenarioItem, 1395404770);
	template<> ABP_200508_API UClass* StaticClass<UCareerSnapshotScenarioItem>()
	{
		return UCareerSnapshotScenarioItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCareerSnapshotScenarioItem(Z_Construct_UClass_UCareerSnapshotScenarioItem, &UCareerSnapshotScenarioItem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UCareerSnapshotScenarioItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCareerSnapshotScenarioItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
