// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSFriendPresence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSFriendPresence() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendPresence_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendPresence();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresenceBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	DEFINE_FUNCTION(UEOSFriendPresence::execGetPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriendPresence::execGetProductID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriendPresence::execGetProductName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriendPresence::execGetProductVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductVersion();
		P_NATIVE_END;
	}
	void UEOSFriendPresence::StaticRegisterNativesUEOSFriendPresence()
	{
		UClass* Class = UEOSFriendPresence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlatform", &UEOSFriendPresence::execGetPlatform },
			{ "GetProductID", &UEOSFriendPresence::execGetProductID },
			{ "GetProductName", &UEOSFriendPresence::execGetProductName },
			{ "GetProductVersion", &UEOSFriendPresence::execGetProductVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics
	{
		struct EOSFriendPresence_eventGetPlatform_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriendPresence_eventGetPlatform_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriendPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriendPresence, nullptr, "GetPlatform", nullptr, nullptr, sizeof(EOSFriendPresence_eventGetPlatform_Parms), Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriendPresence_GetPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriendPresence_GetPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics
	{
		struct EOSFriendPresence_eventGetProductID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriendPresence_eventGetProductID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriendPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriendPresence, nullptr, "GetProductID", nullptr, nullptr, sizeof(EOSFriendPresence_eventGetProductID_Parms), Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriendPresence_GetProductID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriendPresence_GetProductID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics
	{
		struct EOSFriendPresence_eventGetProductName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriendPresence_eventGetProductName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriendPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriendPresence, nullptr, "GetProductName", nullptr, nullptr, sizeof(EOSFriendPresence_eventGetProductName_Parms), Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriendPresence_GetProductName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriendPresence_GetProductName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics
	{
		struct EOSFriendPresence_eventGetProductVersion_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriendPresence_eventGetProductVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriendPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriendPresence, nullptr, "GetProductVersion", nullptr, nullptr, sizeof(EOSFriendPresence_eventGetProductVersion_Parms), Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSFriendPresence_NoRegister()
	{
		return UEOSFriendPresence::StaticClass();
	}
	struct Z_Construct_UClass_UEOSFriendPresence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSFriendPresence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSPresenceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSFriendPresence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSFriendPresence_GetPlatform, "GetPlatform" }, // 1091602195
		{ &Z_Construct_UFunction_UEOSFriendPresence_GetProductID, "GetProductID" }, // 2100430396
		{ &Z_Construct_UFunction_UEOSFriendPresence_GetProductName, "GetProductName" }, // 348565486
		{ &Z_Construct_UFunction_UEOSFriendPresence_GetProductVersion, "GetProductVersion" }, // 2804653968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriendPresence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSFriendPresence.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSFriendPresence.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSFriendPresence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSFriendPresence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSFriendPresence_Statics::ClassParams = {
		&UEOSFriendPresence::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSFriendPresence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriendPresence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSFriendPresence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSFriendPresence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSFriendPresence, 2950159414);
	template<> YEOSSDK_API UClass* StaticClass<UEOSFriendPresence>()
	{
		return UEOSFriendPresence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSFriendPresence(Z_Construct_UClass_UEOSFriendPresence, &UEOSFriendPresence::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSFriendPresence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSFriendPresence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
