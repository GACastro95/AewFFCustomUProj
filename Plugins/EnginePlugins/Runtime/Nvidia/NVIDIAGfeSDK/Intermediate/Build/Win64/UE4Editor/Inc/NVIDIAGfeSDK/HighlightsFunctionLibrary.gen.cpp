// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/HighlightsFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighlightsFunctionLibrary() {}
// Cross Module References
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsFunctionLibrary_NoRegister();
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKCreateResponse();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKPermission();
// End Cross Module References
	DEFINE_FUNCTION(UHighlightsFunctionLibrary::execChekIfHighlightsAvailable)
	{
		P_GET_STRUCT_REF(FGfeSDKCreateResponse,Z_Param_Out_InitProperties);
		P_GET_UBOOL_REF(Z_Param_Out_VideoGranted);
		P_GET_UBOOL_REF(Z_Param_Out_ScreenshotsGranted);
		P_GET_ENUM_REF(EGfeSDKPermission,Z_Param_Out_Video);
		P_GET_ENUM_REF(EGfeSDKPermission,Z_Param_Out_Screenshots);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHighlightsFunctionLibrary::ChekIfHighlightsAvailable(Z_Param_Out_InitProperties,Z_Param_Out_VideoGranted,Z_Param_Out_ScreenshotsGranted,(EGfeSDKPermission&)(Z_Param_Out_Video),(EGfeSDKPermission&)(Z_Param_Out_Screenshots));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHighlightsFunctionLibrary::execPoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UHighlightsFunctionLibrary::Poll();
		P_NATIVE_END;
	}
	void UHighlightsFunctionLibrary::StaticRegisterNativesUHighlightsFunctionLibrary()
	{
		UClass* Class = UHighlightsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChekIfHighlightsAvailable", &UHighlightsFunctionLibrary::execChekIfHighlightsAvailable },
			{ "Poll", &UHighlightsFunctionLibrary::execPoll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics
	{
		struct HighlightsFunctionLibrary_eventChekIfHighlightsAvailable_Parms
		{
			FGfeSDKCreateResponse InitProperties;
			bool VideoGranted;
			bool ScreenshotsGranted;
			EGfeSDKPermission Video;
			EGfeSDKPermission Screenshots;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitProperties;
		static void NewProp_VideoGranted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VideoGranted;
		static void NewProp_ScreenshotsGranted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScreenshotsGranted;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Video_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Video;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Screenshots_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Screenshots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_InitProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_InitProperties = { "InitProperties", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsFunctionLibrary_eventChekIfHighlightsAvailable_Parms, InitProperties), Z_Construct_UScriptStruct_FGfeSDKCreateResponse, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_InitProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_InitProperties_MetaData)) };
	void Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_VideoGranted_SetBit(void* Obj)
	{
		((HighlightsFunctionLibrary_eventChekIfHighlightsAvailable_Parms*)Obj)->VideoGranted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_VideoGranted = { "VideoGranted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HighlightsFunctionLibrary_eventChekIfHighlightsAvailable_Parms), &Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_VideoGranted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_ScreenshotsGranted_SetBit(void* Obj)
	{
		((HighlightsFunctionLibrary_eventChekIfHighlightsAvailable_Parms*)Obj)->ScreenshotsGranted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_ScreenshotsGranted = { "ScreenshotsGranted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HighlightsFunctionLibrary_eventChekIfHighlightsAvailable_Parms), &Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_ScreenshotsGranted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_Video_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsFunctionLibrary_eventChekIfHighlightsAvailable_Parms, Video), Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKPermission, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_Screenshots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_Screenshots = { "Screenshots", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsFunctionLibrary_eventChekIfHighlightsAvailable_Parms, Screenshots), Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKPermission, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_InitProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_VideoGranted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_ScreenshotsGranted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_Video_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_Video,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_Screenshots_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::NewProp_Screenshots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighlightsFunctionLibrary, nullptr, "ChekIfHighlightsAvailable", nullptr, nullptr, sizeof(HighlightsFunctionLibrary_eventChekIfHighlightsAvailable_Parms), Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHighlightsFunctionLibrary_Poll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsFunctionLibrary_Poll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightsFunctionLibrary_Poll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighlightsFunctionLibrary, nullptr, "Poll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsFunctionLibrary_Poll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsFunctionLibrary_Poll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighlightsFunctionLibrary_Poll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighlightsFunctionLibrary_Poll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHighlightsFunctionLibrary_NoRegister()
	{
		return UHighlightsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHighlightsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHighlightsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHighlightsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighlightsFunctionLibrary_ChekIfHighlightsAvailable, "ChekIfHighlightsAvailable" }, // 1330473340
		{ &Z_Construct_UFunction_UHighlightsFunctionLibrary_Poll, "Poll" }, // 2581548156
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HighlightsFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HighlightsFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighlightsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighlightsFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighlightsFunctionLibrary_Statics::ClassParams = {
		&UHighlightsFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHighlightsFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighlightsFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighlightsFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighlightsFunctionLibrary, 2330243128);
	template<> NVIDIAGFESDK_API UClass* StaticClass<UHighlightsFunctionLibrary>()
	{
		return UHighlightsFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighlightsFunctionLibrary(Z_Construct_UClass_UHighlightsFunctionLibrary, &UHighlightsFunctionLibrary::StaticClass, TEXT("/Script/NVIDIAGfeSDK"), TEXT("UHighlightsFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightsFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
