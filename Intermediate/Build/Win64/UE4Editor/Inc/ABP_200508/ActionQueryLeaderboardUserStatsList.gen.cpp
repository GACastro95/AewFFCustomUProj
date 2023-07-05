// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ActionQueryLeaderboardUserStatsList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionQueryLeaderboardUserStatsList() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UActionQueryLeaderboardUserStatsList();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELLeaderboardUserData();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedQueryLeaderboardUserStatsList__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardUserStats_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActionQueryLeaderboardUserStatsList::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionQueryLeaderboardUserStatsList::execActionQueryLeaderboardUserStatsList)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_TARRAY_REF(FELLeaderboardUserData,Z_Param_Out_NewUserData);
		P_GET_UBOOL(Z_Param_NewBForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionQueryLeaderboardUserStatsList**)Z_Param__Result=UActionQueryLeaderboardUserStatsList::ActionQueryLeaderboardUserStatsList(Z_Param_NewWorldContextObject,Z_Param_Out_NewUserData,Z_Param_NewBForce);
		P_NATIVE_END;
	}
	void UActionQueryLeaderboardUserStatsList::StaticRegisterNativesUActionQueryLeaderboardUserStatsList()
	{
		UClass* Class = UActionQueryLeaderboardUserStatsList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UActionQueryLeaderboardUserStatsList::execAbort },
			{ "ActionQueryLeaderboardUserStatsList", &UActionQueryLeaderboardUserStatsList::execActionQueryLeaderboardUserStatsList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserStatsList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryLeaderboardUserStatsList, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics
	{
		struct ActionQueryLeaderboardUserStatsList_eventActionQueryLeaderboardUserStatsList_Parms
		{
			UObject* NewWorldContextObject;
			TArray<FELLeaderboardUserData> NewUserData;
			bool NewBForce;
			UActionQueryLeaderboardUserStatsList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewUserData;
		static void NewProp_NewBForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewBForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboardUserStatsList_eventActionQueryLeaderboardUserStatsList_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewUserData_Inner = { "NewUserData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewUserData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewUserData = { "NewUserData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboardUserStatsList_eventActionQueryLeaderboardUserStatsList_Parms, NewUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewUserData_MetaData)) };
	void Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewBForce_SetBit(void* Obj)
	{
		((ActionQueryLeaderboardUserStatsList_eventActionQueryLeaderboardUserStatsList_Parms*)Obj)->NewBForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewBForce = { "NewBForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionQueryLeaderboardUserStatsList_eventActionQueryLeaderboardUserStatsList_Parms), &Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewBForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryLeaderboardUserStatsList_eventActionQueryLeaderboardUserStatsList_Parms, ReturnValue), Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_NewBForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserStatsList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryLeaderboardUserStatsList, nullptr, "ActionQueryLeaderboardUserStatsList", nullptr, nullptr, sizeof(ActionQueryLeaderboardUserStatsList_eventActionQueryLeaderboardUserStatsList_Parms), Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_NoRegister()
	{
		return UActionQueryLeaderboardUserStatsList::StaticClass();
	}
	struct Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForce_MetaData[];
#endif
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Results;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_Abort, "Abort" }, // 2537308438
		{ &Z_Construct_UFunction_UActionQueryLeaderboardUserStatsList_ActionQueryLeaderboardUserStatsList, "ActionQueryLeaderboardUserStatsList" }, // 2049594557
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActionQueryLeaderboardUserStatsList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserStatsList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserStatsList" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserStatsList.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserStatsList, OnCompleted), Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedQueryLeaderboardUserStatsList__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserStatsList" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserStatsList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserStatsList, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_QuerySeason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserStatsList" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserStatsList.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_QuerySeason = { "QuerySeason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserStatsList, QuerySeason), METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_QuerySeason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_QuerySeason_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_UserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserStatsList" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserStatsList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserStatsList, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_bForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserStatsList" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserStatsList.h" },
	};
#endif
	void Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((UActionQueryLeaderboardUserStatsList*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionQueryLeaderboardUserStatsList), &Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_bForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_bForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserStatsList" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserStatsList.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserStatsList, ArrayIndex), METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_ArrayIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELLeaderboardUserStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_Results_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryLeaderboardUserStatsList" },
		{ "ModuleRelativePath", "Public/ActionQueryLeaderboardUserStatsList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryLeaderboardUserStatsList, Results), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_Results_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_QuerySeason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_UserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_ArrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_Results_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::NewProp_Results,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionQueryLeaderboardUserStatsList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::ClassParams = {
		&UActionQueryLeaderboardUserStatsList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionQueryLeaderboardUserStatsList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionQueryLeaderboardUserStatsList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionQueryLeaderboardUserStatsList, 2188953897);
	template<> ABP_200508_API UClass* StaticClass<UActionQueryLeaderboardUserStatsList>()
	{
		return UActionQueryLeaderboardUserStatsList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionQueryLeaderboardUserStatsList(Z_Construct_UClass_UActionQueryLeaderboardUserStatsList, &UActionQueryLeaderboardUserStatsList::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UActionQueryLeaderboardUserStatsList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionQueryLeaderboardUserStatsList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
