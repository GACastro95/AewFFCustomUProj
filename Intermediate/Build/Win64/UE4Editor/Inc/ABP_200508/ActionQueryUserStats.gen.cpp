// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ActionQueryUserStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionQueryUserStats() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UActionQueryUserStats_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UActionQueryUserStats();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedQueryUserStats__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UActionQueryUserStats::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionQueryUserStats::execActionQueryMySeasonStatList)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StatNames);
		P_GET_UBOOL(Z_Param_NewBForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionQueryUserStats**)Z_Param__Result=UActionQueryUserStats::ActionQueryMySeasonStatList(Z_Param_NewWorldContextObject,Z_Param_Season,Z_Param_Out_StatNames,Z_Param_NewBForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionQueryUserStats::execActionQueryMySeasonStats)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_NewBForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionQueryUserStats**)Z_Param__Result=UActionQueryUserStats::ActionQueryMySeasonStats(Z_Param_NewWorldContextObject,Z_Param_Season,Z_Param_NewBForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionQueryUserStats::execActionQueryUserSeasonStatList)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewProductUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewDisplayName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StatNames);
		P_GET_UBOOL(Z_Param_NewBForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionQueryUserStats**)Z_Param__Result=UActionQueryUserStats::ActionQueryUserSeasonStatList(Z_Param_NewWorldContextObject,Z_Param_NewProductUserID,Z_Param_NewDisplayName,Z_Param_Season,Z_Param_Out_StatNames,Z_Param_NewBForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionQueryUserStats::execActionQueryUserSeasonStats)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewProductUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewDisplayName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_NewBForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionQueryUserStats**)Z_Param__Result=UActionQueryUserStats::ActionQueryUserSeasonStats(Z_Param_NewWorldContextObject,Z_Param_NewProductUserID,Z_Param_NewDisplayName,Z_Param_Season,Z_Param_NewBForce);
		P_NATIVE_END;
	}
	void UActionQueryUserStats::StaticRegisterNativesUActionQueryUserStats()
	{
		UClass* Class = UActionQueryUserStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UActionQueryUserStats::execAbort },
			{ "ActionQueryMySeasonStatList", &UActionQueryUserStats::execActionQueryMySeasonStatList },
			{ "ActionQueryMySeasonStats", &UActionQueryUserStats::execActionQueryMySeasonStats },
			{ "ActionQueryUserSeasonStatList", &UActionQueryUserStats::execActionQueryUserSeasonStatList },
			{ "ActionQueryUserSeasonStats", &UActionQueryUserStats::execActionQueryUserSeasonStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionQueryUserStats_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryUserStats_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryUserStats, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryUserStats_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryUserStats_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics
	{
		struct ActionQueryUserStats_eventActionQueryMySeasonStatList_Parms
		{
			UObject* NewWorldContextObject;
			int32 Season;
			TArray<FString> StatNames;
			bool NewBForce;
			UActionQueryUserStats* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatNames;
		static void NewProp_NewBForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewBForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryMySeasonStatList_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryMySeasonStatList_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_StatNames_Inner = { "StatNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_StatNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_StatNames = { "StatNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryMySeasonStatList_Parms, StatNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_StatNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_StatNames_MetaData)) };
	void Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_NewBForce_SetBit(void* Obj)
	{
		((ActionQueryUserStats_eventActionQueryMySeasonStatList_Parms*)Obj)->NewBForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_NewBForce = { "NewBForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionQueryUserStats_eventActionQueryMySeasonStatList_Parms), &Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_NewBForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryMySeasonStatList_Parms, ReturnValue), Z_Construct_UClass_UActionQueryUserStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_StatNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_StatNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_NewBForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryUserStats, nullptr, "ActionQueryMySeasonStatList", nullptr, nullptr, sizeof(ActionQueryUserStats_eventActionQueryMySeasonStatList_Parms), Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics
	{
		struct ActionQueryUserStats_eventActionQueryMySeasonStats_Parms
		{
			UObject* NewWorldContextObject;
			int32 Season;
			bool NewBForce;
			UActionQueryUserStats* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_NewBForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewBForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryMySeasonStats_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryMySeasonStats_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::NewProp_NewBForce_SetBit(void* Obj)
	{
		((ActionQueryUserStats_eventActionQueryMySeasonStats_Parms*)Obj)->NewBForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::NewProp_NewBForce = { "NewBForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionQueryUserStats_eventActionQueryMySeasonStats_Parms), &Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::NewProp_NewBForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryMySeasonStats_Parms, ReturnValue), Z_Construct_UClass_UActionQueryUserStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::NewProp_NewBForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryUserStats, nullptr, "ActionQueryMySeasonStats", nullptr, nullptr, sizeof(ActionQueryUserStats_eventActionQueryMySeasonStats_Parms), Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics
	{
		struct ActionQueryUserStats_eventActionQueryUserSeasonStatList_Parms
		{
			UObject* NewWorldContextObject;
			FString NewProductUserID;
			FString NewDisplayName;
			int32 Season;
			TArray<FString> StatNames;
			bool NewBForce;
			UActionQueryUserStats* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewDisplayName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatNames;
		static void NewProp_NewBForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewBForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStatList_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewProductUserID = { "NewProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStatList_Parms, NewProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewDisplayName = { "NewDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStatList_Parms, NewDisplayName), METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewDisplayName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStatList_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_StatNames_Inner = { "StatNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_StatNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_StatNames = { "StatNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStatList_Parms, StatNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_StatNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_StatNames_MetaData)) };
	void Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewBForce_SetBit(void* Obj)
	{
		((ActionQueryUserStats_eventActionQueryUserSeasonStatList_Parms*)Obj)->NewBForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewBForce = { "NewBForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionQueryUserStats_eventActionQueryUserSeasonStatList_Parms), &Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewBForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStatList_Parms, ReturnValue), Z_Construct_UClass_UActionQueryUserStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_StatNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_StatNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_NewBForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryUserStats, nullptr, "ActionQueryUserSeasonStatList", nullptr, nullptr, sizeof(ActionQueryUserStats_eventActionQueryUserSeasonStatList_Parms), Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics
	{
		struct ActionQueryUserStats_eventActionQueryUserSeasonStats_Parms
		{
			UObject* NewWorldContextObject;
			FString NewProductUserID;
			FString NewDisplayName;
			int32 Season;
			bool NewBForce;
			UActionQueryUserStats* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewDisplayName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_NewBForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewBForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStats_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewProductUserID = { "NewProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStats_Parms, NewProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewDisplayName = { "NewDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStats_Parms, NewDisplayName), METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewDisplayName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStats_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewBForce_SetBit(void* Obj)
	{
		((ActionQueryUserStats_eventActionQueryUserSeasonStats_Parms*)Obj)->NewBForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewBForce = { "NewBForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionQueryUserStats_eventActionQueryUserSeasonStats_Parms), &Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewBForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryUserStats_eventActionQueryUserSeasonStats_Parms, ReturnValue), Z_Construct_UClass_UActionQueryUserStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_NewBForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryUserStats, nullptr, "ActionQueryUserSeasonStats", nullptr, nullptr, sizeof(ActionQueryUserStats_eventActionQueryUserSeasonStats_Parms), Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActionQueryUserStats_NoRegister()
	{
		return UActionQueryUserStats::StaticClass();
	}
	struct Z_Construct_UClass_UActionQueryUserStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuerySeason_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuerySeason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueryStatNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryStatNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryStatNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForce_MetaData[];
#endif
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionQueryUserStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionQueryUserStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionQueryUserStats_Abort, "Abort" }, // 2386716558
		{ &Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStatList, "ActionQueryMySeasonStatList" }, // 28077677
		{ &Z_Construct_UFunction_UActionQueryUserStats_ActionQueryMySeasonStats, "ActionQueryMySeasonStats" }, // 2643027186
		{ &Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStatList, "ActionQueryUserSeasonStatList" }, // 3569099252
		{ &Z_Construct_UFunction_UActionQueryUserStats_ActionQueryUserSeasonStats, "ActionQueryUserSeasonStats" }, // 3736169848
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryUserStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActionQueryUserStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryUserStats" },
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryUserStats, OnCompleted), Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedQueryUserStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryUserStats" },
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryUserStats, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QuerySeason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryUserStats" },
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QuerySeason = { "QuerySeason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryUserStats, QuerySeason), METADATA_PARAMS(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QuerySeason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QuerySeason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryUserStats" },
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryUserStats, ProductUserID), METADATA_PARAMS(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryUserStats" },
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryUserStats, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QueryStatNames_Inner = { "QueryStatNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QueryStatNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryUserStats" },
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QueryStatNames = { "QueryStatNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryUserStats, QueryStatNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QueryStatNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QueryStatNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_bForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryUserStats" },
		{ "ModuleRelativePath", "Public/ActionQueryUserStats.h" },
	};
#endif
	void Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((UActionQueryUserStats*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionQueryUserStats), &Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_bForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_bForce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionQueryUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QuerySeason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QueryStatNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_QueryStatNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryUserStats_Statics::NewProp_bForce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionQueryUserStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionQueryUserStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionQueryUserStats_Statics::ClassParams = {
		&UActionQueryUserStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionQueryUserStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryUserStats_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionQueryUserStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryUserStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionQueryUserStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionQueryUserStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionQueryUserStats, 4211977760);
	template<> ABP_200508_API UClass* StaticClass<UActionQueryUserStats>()
	{
		return UActionQueryUserStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionQueryUserStats(Z_Construct_UClass_UActionQueryUserStats, &UActionQueryUserStats::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UActionQueryUserStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionQueryUserStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
