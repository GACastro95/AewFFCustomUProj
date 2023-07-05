// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaPlaylist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlaylist() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlaylist_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlaylist();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UManaPlaylist::execAdd)
	{
		P_GET_OBJECT(UManaMovie,Z_Param_ManaMovie);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Add(Z_Param_ManaMovie);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execGet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManaMovie**)Z_Param__Result=P_THIS->Get(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execGetNext)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InOutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManaMovie**)Z_Param__Result=P_THIS->GetNext(Z_Param_Out_InOutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execGetPrevious)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InOutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManaMovie**)Z_Param__Result=P_THIS->GetPrevious(Z_Param_Out_InOutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execGetRandom)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InOutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManaMovie**)Z_Param__Result=P_THIS->GetRandom(Z_Param_Out_InOutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execInsert)
	{
		P_GET_OBJECT(UManaMovie,Z_Param_ManaMovie);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Insert(Z_Param_ManaMovie,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execIsAlpha)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlpha();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execIsMixedTypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMixedTypes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execIsSeamless)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSeamless();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Num();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execRemove)
	{
		P_GET_OBJECT(UManaMovie,Z_Param_ManaMovie);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Remove(Z_Param_ManaMovie);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaPlaylist::execRemoveAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAt(Z_Param_Index);
		P_NATIVE_END;
	}
	void UManaPlaylist::StaticRegisterNativesUManaPlaylist()
	{
		UClass* Class = UManaPlaylist::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UManaPlaylist::execAdd },
			{ "Get", &UManaPlaylist::execGet },
			{ "GetNext", &UManaPlaylist::execGetNext },
			{ "GetPrevious", &UManaPlaylist::execGetPrevious },
			{ "GetRandom", &UManaPlaylist::execGetRandom },
			{ "Insert", &UManaPlaylist::execInsert },
			{ "IsAlpha", &UManaPlaylist::execIsAlpha },
			{ "IsMixedTypes", &UManaPlaylist::execIsMixedTypes },
			{ "IsSeamless", &UManaPlaylist::execIsSeamless },
			{ "Num", &UManaPlaylist::execNum },
			{ "Remove", &UManaPlaylist::execRemove },
			{ "RemoveAt", &UManaPlaylist::execRemoveAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManaPlaylist_Add_Statics
	{
		struct ManaPlaylist_eventAdd_Parms
		{
			UManaMovie* ManaMovie;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaMovie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlaylist_Add_Statics::NewProp_ManaMovie = { "ManaMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventAdd_Parms, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_Add_Statics::NewProp_ManaMovie,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_Add_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "Add", nullptr, nullptr, sizeof(ManaPlaylist_eventAdd_Parms), Z_Construct_UFunction_UManaPlaylist_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_Get_Statics
	{
		struct ManaPlaylist_eventGet_Parms
		{
			int32 Index;
			UManaMovie* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlaylist_Get_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventGet_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlaylist_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventGet_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_Get_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "Get", nullptr, nullptr, sizeof(ManaPlaylist_eventGet_Parms), Z_Construct_UFunction_UManaPlaylist_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_GetNext_Statics
	{
		struct ManaPlaylist_eventGetNext_Parms
		{
			int32 InOutIndex;
			UManaMovie* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::NewProp_InOutIndex = { "InOutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventGetNext_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventGetNext_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::NewProp_InOutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "GetNext", nullptr, nullptr, sizeof(ManaPlaylist_eventGetNext_Parms), Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_GetNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_GetNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics
	{
		struct ManaPlaylist_eventGetPrevious_Parms
		{
			int32 InOutIndex;
			UManaMovie* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::NewProp_InOutIndex = { "InOutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventGetPrevious_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventGetPrevious_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::NewProp_InOutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "GetPrevious", nullptr, nullptr, sizeof(ManaPlaylist_eventGetPrevious_Parms), Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_GetPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_GetPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics
	{
		struct ManaPlaylist_eventGetRandom_Parms
		{
			int32 InOutIndex;
			UManaMovie* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::NewProp_InOutIndex = { "InOutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventGetRandom_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventGetRandom_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::NewProp_InOutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "GetRandom", nullptr, nullptr, sizeof(ManaPlaylist_eventGetRandom_Parms), Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_GetRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_GetRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_Insert_Statics
	{
		struct ManaPlaylist_eventInsert_Parms
		{
			UManaMovie* ManaMovie;
			int32 Index;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaMovie;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlaylist_Insert_Statics::NewProp_ManaMovie = { "ManaMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventInsert_Parms, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlaylist_Insert_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventInsert_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_Insert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_Insert_Statics::NewProp_ManaMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_Insert_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_Insert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_Insert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "Insert", nullptr, nullptr, sizeof(ManaPlaylist_eventInsert_Parms), Z_Construct_UFunction_UManaPlaylist_Insert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_Insert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_Insert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_Insert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_Insert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_Insert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics
	{
		struct ManaPlaylist_eventIsAlpha_Parms
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
	void Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlaylist_eventIsAlpha_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlaylist_eventIsAlpha_Parms), &Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "IsAlpha", nullptr, nullptr, sizeof(ManaPlaylist_eventIsAlpha_Parms), Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_IsAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_IsAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics
	{
		struct ManaPlaylist_eventIsMixedTypes_Parms
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
	void Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlaylist_eventIsMixedTypes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlaylist_eventIsMixedTypes_Parms), &Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "IsMixedTypes", nullptr, nullptr, sizeof(ManaPlaylist_eventIsMixedTypes_Parms), Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_IsMixedTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_IsMixedTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics
	{
		struct ManaPlaylist_eventIsSeamless_Parms
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
	void Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaPlaylist_eventIsSeamless_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ManaPlaylist_eventIsSeamless_Parms), &Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "IsSeamless", nullptr, nullptr, sizeof(ManaPlaylist_eventIsSeamless_Parms), Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_IsSeamless()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_IsSeamless_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_Num_Statics
	{
		struct ManaPlaylist_eventNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlaylist_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_Num_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_Num_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_Num_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "Num", nullptr, nullptr, sizeof(ManaPlaylist_eventNum_Parms), Z_Construct_UFunction_UManaPlaylist_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_Num_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_Num_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_Num_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_Num()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_Num_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_Remove_Statics
	{
		struct ManaPlaylist_eventRemove_Parms
		{
			UManaMovie* ManaMovie;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaMovie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaPlaylist_Remove_Statics::NewProp_ManaMovie = { "ManaMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventRemove_Parms, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_Remove_Statics::NewProp_ManaMovie,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_Remove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "Remove", nullptr, nullptr, sizeof(ManaPlaylist_eventRemove_Parms), Z_Construct_UFunction_UManaPlaylist_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics
	{
		struct ManaPlaylist_eventRemoveAt_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManaPlaylist_eventRemoveAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, nullptr, "RemoveAt", nullptr, nullptr, sizeof(ManaPlaylist_eventRemoveAt_Parms), Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaPlaylist_RemoveAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManaPlaylist_RemoveAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManaPlaylist_NoRegister()
	{
		return UManaPlaylist::StaticClass();
	}
	struct Z_Construct_UClass_UManaPlaylist_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Movies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlpha_MetaData[];
#endif
		static void NewProp_bIsAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMixedTypes_MetaData[];
#endif
		static void NewProp_bIsMixedTypes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMixedTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSeamless_MetaData[];
#endif
		static void NewProp_bIsSeamless_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSeamless;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManaPlaylist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManaPlaylist_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaPlaylist_Add, "Add" }, // 855151495
		{ &Z_Construct_UFunction_UManaPlaylist_Get, "Get" }, // 2365221467
		{ &Z_Construct_UFunction_UManaPlaylist_GetNext, "GetNext" }, // 3461486709
		{ &Z_Construct_UFunction_UManaPlaylist_GetPrevious, "GetPrevious" }, // 4140459544
		{ &Z_Construct_UFunction_UManaPlaylist_GetRandom, "GetRandom" }, // 1167551020
		{ &Z_Construct_UFunction_UManaPlaylist_Insert, "Insert" }, // 987871613
		{ &Z_Construct_UFunction_UManaPlaylist_IsAlpha, "IsAlpha" }, // 108661956
		{ &Z_Construct_UFunction_UManaPlaylist_IsMixedTypes, "IsMixedTypes" }, // 178652956
		{ &Z_Construct_UFunction_UManaPlaylist_IsSeamless, "IsSeamless" }, // 3625339491
		{ &Z_Construct_UFunction_UManaPlaylist_Num, "Num" }, // 3006065425
		{ &Z_Construct_UFunction_UManaPlaylist_Remove, "Remove" }, // 3678655708
		{ &Z_Construct_UFunction_UManaPlaylist_RemoveAt, "RemoveAt" }, // 353138852
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlaylist_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ManaPlaylist.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaPlaylist_Statics::NewProp_Movies_Inner = { "Movies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlaylist_Statics::NewProp_Movies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlaylist" },
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaPlaylist_Statics::NewProp_Movies = { "Movies", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManaPlaylist, Movies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaPlaylist_Statics::NewProp_Movies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlaylist_Statics::NewProp_Movies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlaylist" },
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	void Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsAlpha_SetBit(void* Obj)
	{
		((UManaPlaylist*)Obj)->bIsAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsAlpha = { "bIsAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UManaPlaylist), &Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsMixedTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlaylist" },
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	void Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsMixedTypes_SetBit(void* Obj)
	{
		((UManaPlaylist*)Obj)->bIsMixedTypes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsMixedTypes = { "bIsMixedTypes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UManaPlaylist), &Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsMixedTypes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsMixedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsMixedTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsSeamless_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlaylist" },
		{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
	};
#endif
	void Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsSeamless_SetBit(void* Obj)
	{
		((UManaPlaylist*)Obj)->bIsSeamless = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsSeamless = { "bIsSeamless", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UManaPlaylist), &Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsSeamless_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsSeamless_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsSeamless_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaPlaylist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlaylist_Statics::NewProp_Movies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlaylist_Statics::NewProp_Movies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsMixedTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaPlaylist_Statics::NewProp_bIsSeamless,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManaPlaylist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaPlaylist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManaPlaylist_Statics::ClassParams = {
		&UManaPlaylist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UManaPlaylist_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlaylist_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManaPlaylist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManaPlaylist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManaPlaylist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManaPlaylist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManaPlaylist, 790899728);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UManaPlaylist>()
	{
		return UManaPlaylist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaPlaylist(Z_Construct_UClass_UManaPlaylist, &UManaPlaylist::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaPlaylist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaPlaylist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
