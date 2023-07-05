// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ActionQueryLeaderboardUserScore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionQueryLeaderboardUserScore() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UActionQueryLeaderboardUserScore_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UActionQueryLeaderboardUserScore();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedQueryLeaderboardUserScore__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboards_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActionQueryLeaderboardUserScore::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionQueryLeaderboardUserScore::execActionQueryLeaderboardUserScore)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_TARRAY_REF(FString,Z_Param_Out_NewUserIds);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_PlatformOnly);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScoreScale);
		P_GET_UBOOL(Z_Param_NewBForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionQueryLeaderboardUserScore**)Z_Param__Result=UActionQueryLeaderboardUserScore::ActionQueryLeaderboardUserScore(Z_Param_NewWorldContextObject,Z_Param_Out_NewUserIds,Z_Param_Name,Z_Param_Season,Z_Param_PlatformOnly,Z_Param_NewScoreScale,Z_Param_NewBForce);
		P_NATIVE_END;
	}
	void UActionQueryLeaderboardUserScore::StaticRegisterNativesUActionQueryLeaderboardUserScore()
	{
		UClass* Class = UActionQueryLeaderboardUserScore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UActionQueryLeaderboardUserScore::execAbort },
			{ "ActionQueryLeaderboardUserScore", &UActionQueryLeaderboardUserScore::execActionQueryLeaderboardUserScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionQueryLeaderboardUserScore_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryLeaderboardUserScore_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryLeaderboardUserScore, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryLeaderboardUserScore_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboardUserScore_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryLeaderboardUserScore_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryLeaderboardUserScore_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics
	{
		struct ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms
		{
			UObject* NewWorldContextObject;
			TArray<FString> NewUserIds;
			FString Name;
			int32 Season;
			bool PlatformOnly;
			float NewScoreScale;
			bool NewBForce;
			UActionQueryLeaderboardUserScore* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewUserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewUserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewUserIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_PlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlatformOnly;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScoreScale;
		static void NewProp_NewBForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewBForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewUserIds_Inner = { "NewUserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewUserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewUserIds = { "NewUserIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms, NewUserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewUserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewUserIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_PlatformOnly_SetBit(void* Obj)
	{
		((ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms*)Obj)->PlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_PlatformOnly = { "PlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms), &Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_PlatformOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewScoreScale = { "NewScoreScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms, NewScoreScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewBForce_SetBit(void* Obj)
	{
		((ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms*)Obj)->NewBForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewBForce = { "NewBForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms), &Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewBForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms, ReturnValue), Z_Construct_UClass_UActionQueryLeaderboardUserScore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewUserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewUserIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_PlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewScoreScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_NewBForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryLeaderboardUserScore, nullptr, "ActionQueryLeaderboardUserScore", nullptr, nullptr, sizeof(ActionQueryLeaderboardUserScore_eventActionQueryLeaderboardUserScore_Parms), Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActionQueryLeaderboardUserScore_NoRegister()
	{
		return UActionQueryLeaderboardUserScore::StaticClass();
	}
	struct Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreScale;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForce_MetaData[];
#endif
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leaderboards_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Leaderboards;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionQueryLeaderboardUserScore_Abort, "Abort" }, // 948731759
		{ &Z_Construct_UFunction_UActionQueryLeaderboardUserScore_ActionQueryLeaderboardUserScore, "ActionQueryLeaderboardUserScore" }, // 2559744030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActionQueryLeaderboardUserScore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserScore" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserScore, OnCompleted), Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedQueryLeaderboardUserScore__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserScore" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserScore, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserScore" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryName = { "QueryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserScore, QueryName), METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_ScoreScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserScore" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_ScoreScale = { "ScoreScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserScore, ScoreScale), METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_ScoreScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_ScoreScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QuerySeason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserScore" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QuerySeason = { "QuerySeason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserScore, QuerySeason), METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QuerySeason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QuerySeason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryPlatformOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserScore" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
	void Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryPlatformOnly_SetBit(void* Obj)
	{
		((UActionQueryLeaderboardUserScore*)Obj)->QueryPlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryPlatformOnly = { "QueryPlatformOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionQueryLeaderboardUserScore), &Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryPlatformOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryPlatformOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryPlatformOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_bForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserScore" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
	void Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((UActionQueryLeaderboardUserScore*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionQueryLeaderboardUserScore), &Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_bForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_bForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_Leaderboards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserScore" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_Leaderboards = { "Leaderboards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserScore, Leaderboards), Z_Construct_UClass_UELLeaderboards_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_Leaderboards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_Leaderboards_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_UserIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserScore" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserScore.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserScore, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_UserIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_ScoreScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QuerySeason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_QueryPlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_Leaderboards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_UserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::NewProp_UserIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionQueryLeaderboardUserScore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::ClassParams = {
		&UActionQueryLeaderboardUserScore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionQueryLeaderboardUserScore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionQueryLeaderboardUserScore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionQueryLeaderboardUserScore, 2290659548);
	template<> ABP_200508_API UClass* StaticClass<UActionQueryLeaderboardUserScore>()
	{
		return UActionQueryLeaderboardUserScore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionQueryLeaderboardUserScore(Z_Construct_UClass_UActionQueryLeaderboardUserScore, &UActionQueryLeaderboardUserScore::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UActionQueryLeaderboardUserScore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionQueryLeaderboardUserScore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
