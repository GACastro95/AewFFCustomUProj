// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ActionQueryLeaderboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionQueryLeaderboard() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UActionQueryLeaderboard_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UActionQueryLeaderboard();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedQueryLeaderboard__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboards_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActionQueryLeaderboard::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionQueryLeaderboard::execActionQueryLeaderboard)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_PlatformOnly);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScoreScale);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionQueryLeaderboard**)Z_Param__Result=UActionQueryLeaderboard::ActionQueryLeaderboard(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Season,Z_Param_PlatformOnly,Z_Param_ScoreScale,Z_Param_bForce);
		P_NATIVE_END;
	}
	void UActionQueryLeaderboard::StaticRegisterNativesUActionQueryLeaderboard()
	{
		UClass* Class = UActionQueryLeaderboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UActionQueryLeaderboard::execAbort },
			{ "ActionQueryLeaderboard", &UActionQueryLeaderboard::execActionQueryLeaderboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionQueryLeaderboard_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryLeaderboard_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryLeaderboard_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryLeaderboard, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryLeaderboard_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboard_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryLeaderboard_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryLeaderboard_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics
	{
		struct ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms
		{
			UObject* WorldContextObject;
			FString Name;
			int32 Season;
			bool PlatformOnly;
			float ScoreScale;
			bool bForce;
			UActionQueryLeaderboard* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_PlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlatformOnly;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreScale;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_PlatformOnly_SetBit(void* Obj)
	{
		((ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms*)Obj)->PlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_PlatformOnly = { "PlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms), &Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_PlatformOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_ScoreScale = { "ScoreScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms, ScoreScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms), &Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UActionQueryLeaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_PlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_ScoreScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryLeaderboard, nullptr, "ActionQueryLeaderboard", nullptr, nullptr, sizeof(ActionQueryLeaderboard_eventActionQueryLeaderboard_Parms), Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActionQueryLeaderboard_NoRegister()
	{
		return UActionQueryLeaderboard::StaticClass();
	}
	struct Z_Construct_UClass_UActionQueryLeaderboard_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryScoreScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueryScoreScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuerySeason_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuerySeason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryPlatformOnly_MetaData[];
#endif
		static void NewProp_QueryPlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_QueryPlatformOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceQuery_MetaData[];
#endif
		static void NewProp_bForceQuery_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leaderboards_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Leaderboards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionQueryLeaderboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionQueryLeaderboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionQueryLeaderboard_Abort, "Abort" }, // 2509397677
		{ &Z_Construct_UFunction_UActionQueryLeaderboard_ActionQueryLeaderboard, "ActionQueryLeaderboard" }, // 34925832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActionQueryLeaderboard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboard" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboard, OnCompleted), Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedQueryLeaderboard__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_WorldContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboard" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboard, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_WorldContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_WorldContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboard" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryName = { "QueryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboard, QueryName), METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryScoreScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboard" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryScoreScale = { "QueryScoreScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboard, QueryScoreScale), METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryScoreScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryScoreScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QuerySeason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboard" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QuerySeason = { "QuerySeason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboard, QuerySeason), METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QuerySeason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QuerySeason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryPlatformOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboard" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
	};
#endif
	void Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryPlatformOnly_SetBit(void* Obj)
	{
		((UActionQueryLeaderboard*)Obj)->QueryPlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryPlatformOnly = { "QueryPlatformOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionQueryLeaderboard), &Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryPlatformOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryPlatformOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryPlatformOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_bForceQuery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboard" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
	};
#endif
	void Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_bForceQuery_SetBit(void* Obj)
	{
		((UActionQueryLeaderboard*)Obj)->bForceQuery = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_bForceQuery = { "bForceQuery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionQueryLeaderboard), &Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_bForceQuery_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_bForceQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_bForceQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_Leaderboards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboard" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_Leaderboards = { "Leaderboards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboard, Leaderboards), Z_Construct_UClass_UELLeaderboards_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_Leaderboards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_Leaderboards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionQueryLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryScoreScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QuerySeason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_QueryPlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_bForceQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboard_Statics::NewProp_Leaderboards,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionQueryLeaderboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionQueryLeaderboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionQueryLeaderboard_Statics::ClassParams = {
		&UActionQueryLeaderboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionQueryLeaderboard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboard_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionQueryLeaderboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionQueryLeaderboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionQueryLeaderboard, 785464674);
	template<> ABP_200508_API UClass* StaticClass<UActionQueryLeaderboard>()
	{
		return UActionQueryLeaderboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionQueryLeaderboard(Z_Construct_UClass_UActionQueryLeaderboard, &UActionQueryLeaderboard::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UActionQueryLeaderboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionQueryLeaderboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
