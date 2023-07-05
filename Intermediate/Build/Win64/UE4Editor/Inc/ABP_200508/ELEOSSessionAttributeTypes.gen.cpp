// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSSessionAttributeTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSSessionAttributeTypes() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSSessionAttributeTypes_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSSessionAttributeTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSSessionAttributeTypes();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSSessionAttributeTypes::execGetSessionAttributeName)
	{
		P_GET_ENUM_REF(EELEOSSessionAttributeTypes,Z_Param_Out_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELEOSSessionAttributeTypes::GetSessionAttributeName((EELEOSSessionAttributeTypes&)(Z_Param_Out_Type));
		P_NATIVE_END;
	}
	void UELEOSSessionAttributeTypes::StaticRegisterNativesUELEOSSessionAttributeTypes()
	{
		UClass* Class = UELEOSSessionAttributeTypes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSessionAttributeName", &UELEOSSessionAttributeTypes::execGetSessionAttributeName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics
	{
		struct ELEOSSessionAttributeTypes_eventGetSessionAttributeName_Parms
		{
			EELEOSSessionAttributeTypes Type;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSSessionAttributeTypes_eventGetSessionAttributeName_Parms, Type), Z_Construct_UEnum_ABP_200508_EELEOSSessionAttributeTypes, METADATA_PARAMS(Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSSessionAttributeTypes_eventGetSessionAttributeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSSessionAttributeTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSSessionAttributeTypes, nullptr, "GetSessionAttributeName", nullptr, nullptr, sizeof(ELEOSSessionAttributeTypes_eventGetSessionAttributeName_Parms), Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSSessionAttributeTypes_NoRegister()
	{
		return UELEOSSessionAttributeTypes::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSSessionAttributeTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSSessionAttributeTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSSessionAttributeTypes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSSessionAttributeTypes_GetSessionAttributeName, "GetSessionAttributeName" }, // 3084445585
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSSessionAttributeTypes_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSSessionAttributeTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSSessionAttributeTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSSessionAttributeTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSSessionAttributeTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSSessionAttributeTypes_Statics::ClassParams = {
		&UELEOSSessionAttributeTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELEOSSessionAttributeTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSSessionAttributeTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSSessionAttributeTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSSessionAttributeTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSSessionAttributeTypes, 1285668037);
	template<> ABP_200508_API UClass* StaticClass<UELEOSSessionAttributeTypes>()
	{
		return UELEOSSessionAttributeTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSSessionAttributeTypes(Z_Construct_UClass_UELEOSSessionAttributeTypes, &UELEOSSessionAttributeTypes::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSSessionAttributeTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSSessionAttributeTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
