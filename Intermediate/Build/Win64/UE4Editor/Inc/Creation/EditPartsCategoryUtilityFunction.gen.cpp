// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditPartsCategoryUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPartsCategoryUtilityFunction() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UEditPartsCategoryUtilityFunction_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UEditPartsCategoryUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryName();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryData();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryDetails();
// End Cross Module References
	DEFINE_FUNCTION(UEditPartsCategoryUtilityFunction::execGetInheritance)
	{
		P_GET_STRUCT_REF(FEditPartsCategoryName,Z_Param_Out_CategoryName);
		P_GET_TSET_REF(FEditPartsCategoryName,Z_Param_Out_Inheritance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditPartsCategoryUtilityFunction::GetInheritance(Z_Param_Out_CategoryName,Z_Param_Out_Inheritance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditPartsCategoryUtilityFunction::execGetPartsCategoryData)
	{
		P_GET_STRUCT_REF(FEditPartsCategoryName,Z_Param_Out_CategoryName);
		P_GET_STRUCT_REF(FEditPartsCategoryData,Z_Param_Out_Data);
		P_GET_TSET_REF(FEditPartsCategoryName,Z_Param_Out_Inheritance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditPartsCategoryUtilityFunction::GetPartsCategoryData(Z_Param_Out_CategoryName,Z_Param_Out_Data,Z_Param_Out_Inheritance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditPartsCategoryUtilityFunction::execGetPartsCategoryDetails)
	{
		P_GET_STRUCT_REF(FEditPartsCategoryName,Z_Param_Out_CategoryName);
		P_GET_STRUCT_REF(FEditPartsCategoryDetails,Z_Param_Out_EditPartsCategoryDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditPartsCategoryUtilityFunction::GetPartsCategoryDetails(Z_Param_Out_CategoryName,Z_Param_Out_EditPartsCategoryDetails);
		P_NATIVE_END;
	}
	void UEditPartsCategoryUtilityFunction::StaticRegisterNativesUEditPartsCategoryUtilityFunction()
	{
		UClass* Class = UEditPartsCategoryUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInheritance", &UEditPartsCategoryUtilityFunction::execGetInheritance },
			{ "GetPartsCategoryData", &UEditPartsCategoryUtilityFunction::execGetPartsCategoryData },
			{ "GetPartsCategoryDetails", &UEditPartsCategoryUtilityFunction::execGetPartsCategoryDetails },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics
	{
		struct EditPartsCategoryUtilityFunction_eventGetInheritance_Parms
		{
			FEditPartsCategoryName CategoryName;
			TSet<FEditPartsCategoryName> Inheritance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inheritance_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Inheritance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditPartsCategoryUtilityFunction_eventGetInheritance_Parms, CategoryName), Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::NewProp_Inheritance_ElementProp = { "Inheritance", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::NewProp_Inheritance = { "Inheritance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditPartsCategoryUtilityFunction_eventGetInheritance_Parms, Inheritance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::NewProp_Inheritance_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::NewProp_Inheritance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditPartsCategoryUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPartsCategoryUtilityFunction, nullptr, "GetInheritance", nullptr, nullptr, sizeof(EditPartsCategoryUtilityFunction_eventGetInheritance_Parms), Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics
	{
		struct EditPartsCategoryUtilityFunction_eventGetPartsCategoryData_Parms
		{
			FEditPartsCategoryName CategoryName;
			FEditPartsCategoryData Data;
			TSet<FEditPartsCategoryName> Inheritance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inheritance_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Inheritance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditPartsCategoryUtilityFunction_eventGetPartsCategoryData_Parms, CategoryName), Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditPartsCategoryUtilityFunction_eventGetPartsCategoryData_Parms, Data), Z_Construct_UScriptStruct_FEditPartsCategoryData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_Inheritance_ElementProp = { "Inheritance", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_Inheritance = { "Inheritance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditPartsCategoryUtilityFunction_eventGetPartsCategoryData_Parms, Inheritance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_Inheritance_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::NewProp_Inheritance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditPartsCategoryUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPartsCategoryUtilityFunction, nullptr, "GetPartsCategoryData", nullptr, nullptr, sizeof(EditPartsCategoryUtilityFunction_eventGetPartsCategoryData_Parms), Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics
	{
		struct EditPartsCategoryUtilityFunction_eventGetPartsCategoryDetails_Parms
		{
			FEditPartsCategoryName CategoryName;
			FEditPartsCategoryDetails EditPartsCategoryDetails;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPartsCategoryDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditPartsCategoryUtilityFunction_eventGetPartsCategoryDetails_Parms, CategoryName), Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::NewProp_EditPartsCategoryDetails = { "EditPartsCategoryDetails", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditPartsCategoryUtilityFunction_eventGetPartsCategoryDetails_Parms, EditPartsCategoryDetails), Z_Construct_UScriptStruct_FEditPartsCategoryDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::NewProp_EditPartsCategoryDetails,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditPartsCategoryUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPartsCategoryUtilityFunction, nullptr, "GetPartsCategoryDetails", nullptr, nullptr, sizeof(EditPartsCategoryUtilityFunction_eventGetPartsCategoryDetails_Parms), Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditPartsCategoryUtilityFunction_NoRegister()
	{
		return UEditPartsCategoryUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEditPartsCategoryUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditPartsCategoryUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditPartsCategoryUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetInheritance, "GetInheritance" }, // 3279373161
		{ &Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryData, "GetPartsCategoryData" }, // 3379155195
		{ &Z_Construct_UFunction_UEditPartsCategoryUtilityFunction_GetPartsCategoryDetails, "GetPartsCategoryDetails" }, // 294615183
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditPartsCategoryUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditPartsCategoryUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditPartsCategoryUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditPartsCategoryUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditPartsCategoryUtilityFunction_Statics::ClassParams = {
		&UEditPartsCategoryUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditPartsCategoryUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditPartsCategoryUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditPartsCategoryUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditPartsCategoryUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditPartsCategoryUtilityFunction, 2531616316);
	template<> CREATION_API UClass* StaticClass<UEditPartsCategoryUtilityFunction>()
	{
		return UEditPartsCategoryUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditPartsCategoryUtilityFunction(Z_Construct_UClass_UEditPartsCategoryUtilityFunction, &UEditPartsCategoryUtilityFunction::StaticClass, TEXT("/Script/Creation"), TEXT("UEditPartsCategoryUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditPartsCategoryUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
