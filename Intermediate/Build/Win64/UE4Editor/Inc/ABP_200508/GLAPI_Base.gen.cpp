// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GLAPI_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLAPI_Base() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_Base_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGameLiftConnectType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameLiftConnectData();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnError__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGLAPI_Base::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameLiftActivateStatus*)Z_Param__Result=P_THIS->Activate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLAPI_Base::execGetGameLiftConnectData)
	{
		P_GET_ENUM(ESSGameLiftConnectType,Z_Param_accsessTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSGameLiftConnectData*)Z_Param__Result=UGLAPI_Base::GetGameLiftConnectData(ESSGameLiftConnectType(Z_Param_accsessTarget));
		P_NATIVE_END;
	}
	void UGLAPI_Base::StaticRegisterNativesUGLAPI_Base()
	{
		UClass* Class = UGLAPI_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UGLAPI_Base::execActivate },
			{ "GetGameLiftConnectData", &UGLAPI_Base::execGetGameLiftConnectData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLAPI_Base_Activate_Statics
	{
		struct GLAPI_Base_eventActivate_Parms
		{
			EGameLiftActivateStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_Base_eventActivate_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_Base, nullptr, "Activate", nullptr, nullptr, sizeof(GLAPI_Base_eventActivate_Parms), Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_Base_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_Base_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics
	{
		struct GLAPI_Base_eventGetGameLiftConnectData_Parms
		{
			ESSGameLiftConnectType accsessTarget;
			FSSGameLiftConnectData ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_accsessTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_accsessTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_accsessTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::NewProp_accsessTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::NewProp_accsessTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::NewProp_accsessTarget = { "accsessTarget", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_Base_eventGetGameLiftConnectData_Parms, accsessTarget), Z_Construct_UEnum_ABP_200508_ESSGameLiftConnectType, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::NewProp_accsessTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::NewProp_accsessTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_Base_eventGetGameLiftConnectData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSGameLiftConnectData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::NewProp_accsessTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::NewProp_accsessTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_Base, nullptr, "GetGameLiftConnectData", nullptr, nullptr, sizeof(GLAPI_Base_eventGetGameLiftConnectData_Parms), Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGLAPI_Base_NoRegister()
	{
		return UGLAPI_Base::StaticClass();
	}
	struct Z_Construct_UClass_UGLAPI_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onRequestError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onRequestError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLAPI_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLAPI_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLAPI_Base_Activate, "Activate" }, // 3948619362
		{ &Z_Construct_UFunction_UGLAPI_Base_GetGameLiftConnectData, "GetGameLiftConnectData" }, // 120709943
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GLAPI_Base.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GLAPI_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_Base_Statics::NewProp_onRequestError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_Base" },
		{ "ModuleRelativePath", "Public/GLAPI_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_Base_Statics::NewProp_onRequestError = { "onRequestError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_Base, onRequestError), Z_Construct_UDelegateFunction_ABP_200508_OnError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_Base_Statics::NewProp_onRequestError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_Base_Statics::NewProp_onRequestError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLAPI_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_Base_Statics::NewProp_onRequestError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLAPI_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLAPI_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLAPI_Base_Statics::ClassParams = {
		&UGLAPI_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLAPI_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_Base_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLAPI_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLAPI_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLAPI_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLAPI_Base, 4179154588);
	template<> ABP_200508_API UClass* StaticClass<UGLAPI_Base>()
	{
		return UGLAPI_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLAPI_Base(Z_Construct_UClass_UGLAPI_Base, &UGLAPI_Base::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGLAPI_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLAPI_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
