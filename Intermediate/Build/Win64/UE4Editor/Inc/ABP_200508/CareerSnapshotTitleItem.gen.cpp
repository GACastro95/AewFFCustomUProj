// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerSnapshotTitleItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerSnapshotTitleItem() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UCareerSnapshotTitleItem_OnValueChanged__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshotTitleItem();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshotTitleItem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshot_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotTitle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCareerSnapshotTitleItem_OnValueChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCareerSnapshotTitleItem_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCareerSnapshotTitleItem_OnValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotTitleItem, nullptr, "OnValueChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCareerSnapshotTitleItem_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCareerSnapshotTitleItem_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCareerSnapshotTitleItem_OnValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCareerSnapshotTitleItem_OnValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCareerSnapshotTitleItem::execCollectSnapshots)
	{
		P_GET_TARRAY_REF(UCareerSnapshot*,Z_Param_Out_Snapshots);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectSnapshots(Z_Param_Out_Snapshots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotTitleItem::execGetRecentSnapshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCareerSnapshot**)Z_Param__Result=P_THIS->GetRecentSnapshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotTitleItem::execGetSnapshotNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSnapshotNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotTitleItem::execGetSnapshots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCareerSnapshot*>*)Z_Param__Result=P_THIS->GetSnapshots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotTitleItem::execGetTitleText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTitleText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotTitleItem::execGetWeekText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetWeekText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotTitleItem::execInit)
	{
		P_GET_STRUCT_REF(FSnapshotTitle,Z_Param_Out_NewTitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Out_NewTitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshotTitleItem::execRemoveSnapshot)
	{
		P_GET_OBJECT(UCareerSnapshot,Z_Param_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSnapshot(Z_Param_Snapshot);
		P_NATIVE_END;
	}
	void UCareerSnapshotTitleItem::StaticRegisterNativesUCareerSnapshotTitleItem()
	{
		UClass* Class = UCareerSnapshotTitleItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectSnapshots", &UCareerSnapshotTitleItem::execCollectSnapshots },
			{ "GetRecentSnapshot", &UCareerSnapshotTitleItem::execGetRecentSnapshot },
			{ "GetSnapshotNum", &UCareerSnapshotTitleItem::execGetSnapshotNum },
			{ "GetSnapshots", &UCareerSnapshotTitleItem::execGetSnapshots },
			{ "GetTitleText", &UCareerSnapshotTitleItem::execGetTitleText },
			{ "GetWeekText", &UCareerSnapshotTitleItem::execGetWeekText },
			{ "Init", &UCareerSnapshotTitleItem::execInit },
			{ "RemoveSnapshot", &UCareerSnapshotTitleItem::execRemoveSnapshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics
	{
		struct CareerSnapshotTitleItem_eventCollectSnapshots_Parms
		{
			TArray<UCareerSnapshot*> Snapshots;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshots_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotTitleItem_eventCollectSnapshots_Parms, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::NewProp_Snapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::NewProp_Snapshots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotTitleItem, nullptr, "CollectSnapshots", nullptr, nullptr, sizeof(CareerSnapshotTitleItem_eventCollectSnapshots_Parms), Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics
	{
		struct CareerSnapshotTitleItem_eventGetRecentSnapshot_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotTitleItem_eventGetRecentSnapshot_Parms, ReturnValue), Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotTitleItem, nullptr, "GetRecentSnapshot", nullptr, nullptr, sizeof(CareerSnapshotTitleItem_eventGetRecentSnapshot_Parms), Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics
	{
		struct CareerSnapshotTitleItem_eventGetSnapshotNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotTitleItem_eventGetSnapshotNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotTitleItem, nullptr, "GetSnapshotNum", nullptr, nullptr, sizeof(CareerSnapshotTitleItem_eventGetSnapshotNum_Parms), Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics
	{
		struct CareerSnapshotTitleItem_eventGetSnapshots_Parms
		{
			TArray<UCareerSnapshot*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotTitleItem_eventGetSnapshots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotTitleItem, nullptr, "GetSnapshots", nullptr, nullptr, sizeof(CareerSnapshotTitleItem_eventGetSnapshots_Parms), Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics
	{
		struct CareerSnapshotTitleItem_eventGetTitleText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotTitleItem_eventGetTitleText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotTitleItem, nullptr, "GetTitleText", nullptr, nullptr, sizeof(CareerSnapshotTitleItem_eventGetTitleText_Parms), Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics
	{
		struct CareerSnapshotTitleItem_eventGetWeekText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotTitleItem_eventGetWeekText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotTitleItem, nullptr, "GetWeekText", nullptr, nullptr, sizeof(CareerSnapshotTitleItem_eventGetWeekText_Parms), Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics
	{
		struct CareerSnapshotTitleItem_eventInit_Parms
		{
			FSnapshotTitle NewTitle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::NewProp_NewTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::NewProp_NewTitle = { "NewTitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotTitleItem_eventInit_Parms, NewTitle), Z_Construct_UScriptStruct_FSnapshotTitle, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::NewProp_NewTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::NewProp_NewTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::NewProp_NewTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotTitleItem, nullptr, "Init", nullptr, nullptr, sizeof(CareerSnapshotTitleItem_eventInit_Parms), Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotTitleItem_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotTitleItem_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics
	{
		struct CareerSnapshotTitleItem_eventRemoveSnapshot_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshotTitleItem_eventRemoveSnapshot_Parms, Snapshot), Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics::NewProp_Snapshot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshotTitleItem, nullptr, "RemoveSnapshot", nullptr, nullptr, sizeof(CareerSnapshotTitleItem_eventRemoveSnapshot_Parms), Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCareerSnapshotTitleItem_NoRegister()
	{
		return UCareerSnapshotTitleItem::StaticClass();
	}
	struct Z_Construct_UClass_UCareerSnapshotTitleItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleSnapshots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleSnapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TitleSnapshots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCareerSnapshotTitleItem_CollectSnapshots, "CollectSnapshots" }, // 3764662454
		{ &Z_Construct_UFunction_UCareerSnapshotTitleItem_GetRecentSnapshot, "GetRecentSnapshot" }, // 643782437
		{ &Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshotNum, "GetSnapshotNum" }, // 2358658197
		{ &Z_Construct_UFunction_UCareerSnapshotTitleItem_GetSnapshots, "GetSnapshots" }, // 1837314710
		{ &Z_Construct_UFunction_UCareerSnapshotTitleItem_GetTitleText, "GetTitleText" }, // 3126582594
		{ &Z_Construct_UFunction_UCareerSnapshotTitleItem_GetWeekText, "GetWeekText" }, // 3046165150
		{ &Z_Construct_UFunction_UCareerSnapshotTitleItem_Init, "Init" }, // 4074237291
		{ &Z_Construct_UDelegateFunction_UCareerSnapshotTitleItem_OnValueChanged__DelegateSignature, "OnValueChanged__DelegateSignature" }, // 1239403010
		{ &Z_Construct_UFunction_UCareerSnapshotTitleItem_RemoveSnapshot, "RemoveSnapshot" }, // 364115299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CareerSnapshotTitleItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotTitleItem" },
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCareerSnapshotTitleItem, OnValueChanged), Z_Construct_UDelegateFunction_UCareerSnapshotTitleItem_OnValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_OnValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_OnValueChanged_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_TitleSnapshots_Inner = { "TitleSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_TitleSnapshots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotTitleItem" },
		{ "ModuleRelativePath", "Public/CareerSnapshotTitleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_TitleSnapshots = { "TitleSnapshots", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCareerSnapshotTitleItem, TitleSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_TitleSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_TitleSnapshots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_OnValueChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_TitleSnapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::NewProp_TitleSnapshots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCareerSnapshotTitleItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::ClassParams = {
		&UCareerSnapshotTitleItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCareerSnapshotTitleItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCareerSnapshotTitleItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCareerSnapshotTitleItem, 45492822);
	template<> ABP_200508_API UClass* StaticClass<UCareerSnapshotTitleItem>()
	{
		return UCareerSnapshotTitleItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCareerSnapshotTitleItem(Z_Construct_UClass_UCareerSnapshotTitleItem, &UCareerSnapshotTitleItem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UCareerSnapshotTitleItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCareerSnapshotTitleItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
