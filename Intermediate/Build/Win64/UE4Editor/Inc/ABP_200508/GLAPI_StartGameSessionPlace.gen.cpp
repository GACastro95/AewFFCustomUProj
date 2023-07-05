// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GLAPI_StartGameSessionPlace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLAPI_StartGameSessionPlace() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_StartGameSessionPlace_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_StartGameSessionPlace();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftClientObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnStartGameSessionPlacement__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnStartGameSessionPlacementFailed__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGLAPI_StartGameSessionPlace::execActivate_RequestParam)
	{
		P_GET_STRUCT(FStartGameSessionPlace_RequestParam,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameLiftActivateStatus*)Z_Param__Result=P_THIS->Activate_RequestParam(Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLAPI_StartGameSessionPlace::execStartGameSessionPlacementAPItoRequestParam)
	{
		P_GET_OBJECT(UGameLiftClientObject,Z_Param_client);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGLAPI_StartGameSessionPlace**)Z_Param__Result=UGLAPI_StartGameSessionPlace::StartGameSessionPlacementAPItoRequestParam(Z_Param_client);
		P_NATIVE_END;
	}
	void UGLAPI_StartGameSessionPlace::StaticRegisterNativesUGLAPI_StartGameSessionPlace()
	{
		UClass* Class = UGLAPI_StartGameSessionPlace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate_RequestParam", &UGLAPI_StartGameSessionPlace::execActivate_RequestParam },
			{ "StartGameSessionPlacementAPItoRequestParam", &UGLAPI_StartGameSessionPlace::execStartGameSessionPlacementAPItoRequestParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics
	{
		struct GLAPI_StartGameSessionPlace_eventActivate_RequestParam_Parms
		{
			FStartGameSessionPlace_RequestParam Request;
			EGameLiftActivateStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_StartGameSessionPlace_eventActivate_RequestParam_Parms, Request), Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_StartGameSessionPlace_eventActivate_RequestParam_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_StartGameSessionPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_StartGameSessionPlace, nullptr, "Activate_RequestParam", nullptr, nullptr, sizeof(GLAPI_StartGameSessionPlace_eventActivate_RequestParam_Parms), Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics
	{
		struct GLAPI_StartGameSessionPlace_eventStartGameSessionPlacementAPItoRequestParam_Parms
		{
			UGameLiftClientObject* client;
			UGLAPI_StartGameSessionPlace* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_client;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::NewProp_client = { "client", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_StartGameSessionPlace_eventStartGameSessionPlacementAPItoRequestParam_Parms, client), Z_Construct_UClass_UGameLiftClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_StartGameSessionPlace_eventStartGameSessionPlacementAPItoRequestParam_Parms, ReturnValue), Z_Construct_UClass_UGLAPI_StartGameSessionPlace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::NewProp_client,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_StartGameSessionPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_StartGameSessionPlace, nullptr, "StartGameSessionPlacementAPItoRequestParam", nullptr, nullptr, sizeof(GLAPI_StartGameSessionPlace_eventStartGameSessionPlacementAPItoRequestParam_Parms), Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGLAPI_StartGameSessionPlace_NoRegister()
	{
		return UGLAPI_StartGameSessionPlace::StaticClass();
	}
	struct Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onSuccess_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSuccess_Request;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_Activate_RequestParam, "Activate_RequestParam" }, // 2471553989
		{ &Z_Construct_UFunction_UGLAPI_StartGameSessionPlace_StartGameSessionPlacementAPItoRequestParam, "StartGameSessionPlacementAPItoRequestParam" }, // 1285361601
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GLAPI_StartGameSessionPlace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GLAPI_StartGameSessionPlace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::NewProp_onSuccess_Request_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_StartGameSessionPlace" },
		{ "ModuleRelativePath", "Public/GLAPI_StartGameSessionPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::NewProp_onSuccess_Request = { "onSuccess_Request", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_StartGameSessionPlace, onSuccess_Request), Z_Construct_UDelegateFunction_ABP_200508_OnStartGameSessionPlacement__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::NewProp_onSuccess_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::NewProp_onSuccess_Request_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::NewProp_OnFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_StartGameSessionPlace" },
		{ "ModuleRelativePath", "Public/GLAPI_StartGameSessionPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_StartGameSessionPlace, OnFailed), Z_Construct_UDelegateFunction_ABP_200508_OnStartGameSessionPlacementFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::NewProp_OnFailed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::NewProp_onSuccess_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::NewProp_OnFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLAPI_StartGameSessionPlace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::ClassParams = {
		&UGLAPI_StartGameSessionPlace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLAPI_StartGameSessionPlace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLAPI_StartGameSessionPlace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLAPI_StartGameSessionPlace, 2977386104);
	template<> ABP_200508_API UClass* StaticClass<UGLAPI_StartGameSessionPlace>()
	{
		return UGLAPI_StartGameSessionPlace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLAPI_StartGameSessionPlace(Z_Construct_UClass_UGLAPI_StartGameSessionPlace, &UGLAPI_StartGameSessionPlace::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGLAPI_StartGameSessionPlace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLAPI_StartGameSessionPlace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
