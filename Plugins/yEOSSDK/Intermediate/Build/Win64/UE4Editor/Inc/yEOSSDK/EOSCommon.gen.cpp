// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCommon() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCommon::execBeginRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginRelease();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommon::execDispose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Dispose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommon::execEndRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EndRelease();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommon::execGetLastErrorString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLastErrorString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommon::execGetLastResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLastResult();
		P_NATIVE_END;
	}
	void UEOSCommon::StaticRegisterNativesUEOSCommon()
	{
		UClass* Class = UEOSCommon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginRelease", &UEOSCommon::execBeginRelease },
			{ "Dispose", &UEOSCommon::execDispose },
			{ "EndRelease", &UEOSCommon::execEndRelease },
			{ "GetLastErrorString", &UEOSCommon::execGetLastErrorString },
			{ "GetLastResult", &UEOSCommon::execGetLastResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics
	{
		struct EOSCommon_eventBeginRelease_Parms
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
	void Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommon_eventBeginRelease_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommon_eventBeginRelease_Parms), &Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommon, nullptr, "BeginRelease", nullptr, nullptr, sizeof(EOSCommon_eventBeginRelease_Parms), Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommon_BeginRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommon_BeginRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommon_Dispose_Statics
	{
		struct EOSCommon_eventDispose_Parms
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
	void Z_Construct_UFunction_UEOSCommon_Dispose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommon_eventDispose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommon_Dispose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommon_eventDispose_Parms), &Z_Construct_UFunction_UEOSCommon_Dispose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommon_Dispose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommon_Dispose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommon_Dispose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommon_Dispose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommon, nullptr, "Dispose", nullptr, nullptr, sizeof(EOSCommon_eventDispose_Parms), Z_Construct_UFunction_UEOSCommon_Dispose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommon_Dispose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommon_Dispose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommon_Dispose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommon_Dispose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommon_Dispose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommon_EndRelease_Statics
	{
		struct EOSCommon_eventEndRelease_Parms
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
	void Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommon_eventEndRelease_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommon_eventEndRelease_Parms), &Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommon, nullptr, "EndRelease", nullptr, nullptr, sizeof(EOSCommon_eventEndRelease_Parms), Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommon_EndRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommon_EndRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics
	{
		struct EOSCommon_eventGetLastErrorString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommon_eventGetLastErrorString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommon, nullptr, "GetLastErrorString", nullptr, nullptr, sizeof(EOSCommon_eventGetLastErrorString_Parms), Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommon_GetLastErrorString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommon_GetLastErrorString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics
	{
		struct EOSCommon_eventGetLastResult_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommon_eventGetLastResult_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommon, nullptr, "GetLastResult", nullptr, nullptr, sizeof(EOSCommon_eventGetLastResult_Parms), Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommon_GetLastResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommon_GetLastResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCommon_NoRegister()
	{
		return UEOSCommon::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCommon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCommon_BeginRelease, "BeginRelease" }, // 254405603
		{ &Z_Construct_UFunction_UEOSCommon_Dispose, "Dispose" }, // 1439315703
		{ &Z_Construct_UFunction_UEOSCommon_EndRelease, "EndRelease" }, // 1432812809
		{ &Z_Construct_UFunction_UEOSCommon_GetLastErrorString, "GetLastErrorString" }, // 1574997549
		{ &Z_Construct_UFunction_UEOSCommon_GetLastResult, "GetLastResult" }, // 3859710529
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSCommon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSCommon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCommon_Statics::ClassParams = {
		&UEOSCommon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCommon, 1039728550);
	template<> YEOSSDK_API UClass* StaticClass<UEOSCommon>()
	{
		return UEOSCommon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCommon(Z_Construct_UClass_UEOSCommon, &UEOSCommon::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSCommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCommon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
