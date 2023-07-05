// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditBodyUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditBodyUtilityFunction() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UEditBodyUtilityFunction_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UEditBodyUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditBodyParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBodyAdjustParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBaseBodyTypeName();
// End Cross Module References
	DEFINE_FUNCTION(UEditBodyUtilityFunction::execConvertToBodyAdjustParam)
	{
		P_GET_STRUCT_REF(FEditBodyParam,Z_Param_Out_EditBodyParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBodyAdjustParam*)Z_Param__Result=UEditBodyUtilityFunction::ConvertToBodyAdjustParam(Z_Param_Out_EditBodyParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditBodyUtilityFunction::execMakeLiteralBaseBodyTypeName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBaseBodyTypeName*)Z_Param__Result=UEditBodyUtilityFunction::MakeLiteralBaseBodyTypeName(Z_Param_RowName);
		P_NATIVE_END;
	}
	void UEditBodyUtilityFunction::StaticRegisterNativesUEditBodyUtilityFunction()
	{
		UClass* Class = UEditBodyUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToBodyAdjustParam", &UEditBodyUtilityFunction::execConvertToBodyAdjustParam },
			{ "MakeLiteralBaseBodyTypeName", &UEditBodyUtilityFunction::execMakeLiteralBaseBodyTypeName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics
	{
		struct EditBodyUtilityFunction_eventConvertToBodyAdjustParam_Parms
		{
			FEditBodyParam EditBodyParam;
			FBodyAdjustParam ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditBodyParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditBodyParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::NewProp_EditBodyParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::NewProp_EditBodyParam = { "EditBodyParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditBodyUtilityFunction_eventConvertToBodyAdjustParam_Parms, EditBodyParam), Z_Construct_UScriptStruct_FEditBodyParam, METADATA_PARAMS(Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::NewProp_EditBodyParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::NewProp_EditBodyParam_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditBodyUtilityFunction_eventConvertToBodyAdjustParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FBodyAdjustParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::NewProp_EditBodyParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditBodyUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditBodyUtilityFunction, nullptr, "ConvertToBodyAdjustParam", nullptr, nullptr, sizeof(EditBodyUtilityFunction_eventConvertToBodyAdjustParam_Parms), Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics
	{
		struct EditBodyUtilityFunction_eventMakeLiteralBaseBodyTypeName_Parms
		{
			FName RowName;
			FBaseBodyTypeName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditBodyUtilityFunction_eventMakeLiteralBaseBodyTypeName_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditBodyUtilityFunction_eventMakeLiteralBaseBodyTypeName_Parms, ReturnValue), Z_Construct_UScriptStruct_FBaseBodyTypeName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditBodyUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditBodyUtilityFunction, nullptr, "MakeLiteralBaseBodyTypeName", nullptr, nullptr, sizeof(EditBodyUtilityFunction_eventMakeLiteralBaseBodyTypeName_Parms), Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditBodyUtilityFunction_NoRegister()
	{
		return UEditBodyUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEditBodyUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditBodyUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditBodyUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditBodyUtilityFunction_ConvertToBodyAdjustParam, "ConvertToBodyAdjustParam" }, // 3998712127
		{ &Z_Construct_UFunction_UEditBodyUtilityFunction_MakeLiteralBaseBodyTypeName, "MakeLiteralBaseBodyTypeName" }, // 637942570
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditBodyUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditBodyUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditBodyUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditBodyUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditBodyUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditBodyUtilityFunction_Statics::ClassParams = {
		&UEditBodyUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditBodyUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditBodyUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditBodyUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditBodyUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditBodyUtilityFunction, 509969906);
	template<> CREATION_API UClass* StaticClass<UEditBodyUtilityFunction>()
	{
		return UEditBodyUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditBodyUtilityFunction(Z_Construct_UClass_UEditBodyUtilityFunction, &UEditBodyUtilityFunction::StaticClass, TEXT("/Script/Creation"), TEXT("UEditBodyUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditBodyUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
