// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSDebugGameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSDebugGameSession() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugGameSession_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSGameSession_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESessionStatus();
// End Cross Module References
	DEFINE_FUNCTION(AELEOSDebugGameSession::execOnSessionCreateEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSessionCreateEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSDebugGameSession::execOnSessionDestroyEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSessionDestroyEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSDebugGameSession::execOnSessionJoinEvent)
	{
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param_InUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSessionJoinEvent(Z_Param_InUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSDebugGameSession::execOnSessionLeaveEvent)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param_InCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param_InUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSessionLeaveEvent(Z_Param_InCommunityInfo,Z_Param_InUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSDebugGameSession::execOnSessionSearchCancelEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSessionSearchCancelEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSDebugGameSession::execOnSessionSearchEnd)
	{
		P_GET_STRUCT(FELEOSSessionSearchResultWrapper,Z_Param_InResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSessionSearchEnd(Z_Param_InResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEOSDebugGameSession::execOnSessionSearchStartEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSessionSearchStartEvent();
		P_NATIVE_END;
	}
	void AELEOSDebugGameSession::StaticRegisterNativesAELEOSDebugGameSession()
	{
		UClass* Class = AELEOSDebugGameSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSessionCreateEvent", &AELEOSDebugGameSession::execOnSessionCreateEvent },
			{ "OnSessionDestroyEvent", &AELEOSDebugGameSession::execOnSessionDestroyEvent },
			{ "OnSessionJoinEvent", &AELEOSDebugGameSession::execOnSessionJoinEvent },
			{ "OnSessionLeaveEvent", &AELEOSDebugGameSession::execOnSessionLeaveEvent },
			{ "OnSessionSearchCancelEvent", &AELEOSDebugGameSession::execOnSessionSearchCancelEvent },
			{ "OnSessionSearchEnd", &AELEOSDebugGameSession::execOnSessionSearchEnd },
			{ "OnSessionSearchStartEvent", &AELEOSDebugGameSession::execOnSessionSearchStartEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionCreateEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionCreateEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionCreateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSDebugGameSession, nullptr, "OnSessionCreateEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionCreateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionCreateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionCreateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionCreateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionDestroyEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionDestroyEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionDestroyEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSDebugGameSession, nullptr, "OnSessionDestroyEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionDestroyEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionDestroyEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionDestroyEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionDestroyEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics
	{
		struct ELEOSDebugGameSession_eventOnSessionJoinEvent_Parms
		{
			UEOSCommunityUserBase* InUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics::NewProp_InUser = { "InUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSDebugGameSession_eventOnSessionJoinEvent_Parms, InUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics::NewProp_InUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSDebugGameSession, nullptr, "OnSessionJoinEvent", nullptr, nullptr, sizeof(ELEOSDebugGameSession_eventOnSessionJoinEvent_Parms), Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics
	{
		struct ELEOSDebugGameSession_eventOnSessionLeaveEvent_Parms
		{
			UEOSCommunityInfoBase* InCommunityInfo;
			UEOSCommunityUserBase* InUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::NewProp_InCommunityInfo = { "InCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSDebugGameSession_eventOnSessionLeaveEvent_Parms, InCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::NewProp_InUser = { "InUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSDebugGameSession_eventOnSessionLeaveEvent_Parms, InUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::NewProp_InCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::NewProp_InUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSDebugGameSession, nullptr, "OnSessionLeaveEvent", nullptr, nullptr, sizeof(ELEOSDebugGameSession_eventOnSessionLeaveEvent_Parms), Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchCancelEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchCancelEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchCancelEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSDebugGameSession, nullptr, "OnSessionSearchCancelEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchCancelEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchCancelEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchCancelEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchCancelEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics
	{
		struct ELEOSDebugGameSession_eventOnSessionSearchEnd_Parms
		{
			FELEOSSessionSearchResultWrapper InResults;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics::NewProp_InResults = { "InResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSDebugGameSession_eventOnSessionSearchEnd_Parms, InResults), Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics::NewProp_InResults,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSDebugGameSession, nullptr, "OnSessionSearchEnd", nullptr, nullptr, sizeof(ELEOSDebugGameSession_eventOnSessionSearchEnd_Parms), Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchStartEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchStartEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchStartEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEOSDebugGameSession, nullptr, "OnSessionSearchStartEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchStartEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchStartEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchStartEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchStartEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELEOSDebugGameSession_NoRegister()
	{
		return AELEOSDebugGameSession::StaticClass();
	}
	struct Z_Construct_UClass_AELEOSDebugGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetup_MetaData[];
#endif
		static void NewProp_bSetup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[];
#endif
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELEOSGameSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSGameSession;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionLeftTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SessionLeftTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELEOSDebugGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELEOSDebugGameSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionCreateEvent, "OnSessionCreateEvent" }, // 2923464639
		{ &Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionDestroyEvent, "OnSessionDestroyEvent" }, // 3116011296
		{ &Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionJoinEvent, "OnSessionJoinEvent" }, // 3066026905
		{ &Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionLeaveEvent, "OnSessionLeaveEvent" }, // 169726369
		{ &Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchCancelEvent, "OnSessionSearchCancelEvent" }, // 1274441380
		{ &Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchEnd, "OnSessionSearchEnd" }, // 435905642
		{ &Z_Construct_UFunction_AELEOSDebugGameSession_OnSessionSearchStartEvent, "OnSessionSearchStartEvent" }, // 1596919669
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugGameSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSDebugGameSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bSetup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugGameSession" },
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bSetup_SetBit(void* Obj)
	{
		((AELEOSDebugGameSession*)Obj)->bSetup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bSetup = { "bSetup", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSDebugGameSession), &Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugGameSession" },
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((AELEOSDebugGameSession*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSDebugGameSession), &Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_ELEOSGameSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugGameSession" },
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_ELEOSGameSession = { "ELEOSGameSession", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSDebugGameSession, ELEOSGameSession), Z_Construct_UClass_UELEOSGameSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_ELEOSGameSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_ELEOSGameSession_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugGameSession" },
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionStatus = { "SessionStatus", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSDebugGameSession, SessionStatus), Z_Construct_UEnum_ABP_200508_ESessionStatus, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionLeftTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugGameSession" },
		{ "ModuleRelativePath", "Public/ELEOSDebugGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionLeftTime = { "SessionLeftTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSDebugGameSession, SessionLeftTime), METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionLeftTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionLeftTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELEOSDebugGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_bShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_ELEOSGameSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugGameSession_Statics::NewProp_SessionLeftTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELEOSDebugGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELEOSDebugGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELEOSDebugGameSession_Statics::ClassParams = {
		&AELEOSDebugGameSession::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELEOSDebugGameSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugGameSession_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugGameSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELEOSDebugGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELEOSDebugGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELEOSDebugGameSession, 1097981107);
	template<> ABP_200508_API UClass* StaticClass<AELEOSDebugGameSession>()
	{
		return AELEOSDebugGameSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELEOSDebugGameSession(Z_Construct_UClass_AELEOSDebugGameSession, &AELEOSDebugGameSession::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELEOSDebugGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELEOSDebugGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
