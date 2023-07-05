// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomTriggerTableFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTriggerTableFunctionLibrary() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow();
// End Cross Module References
	DEFINE_FUNCTION(UAtomTriggerTableFunctionLibrary::execGetDataTableRowFromName)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_GET_STRUCT_REF(FAtomTriggerRow,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomTriggerTableFunctionLibrary::GetDataTableRowFromName(Z_Param_Table,Z_Param_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	void UAtomTriggerTableFunctionLibrary::StaticRegisterNativesUAtomTriggerTableFunctionLibrary()
	{
		UClass* Class = UAtomTriggerTableFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataTableRowFromName", &UAtomTriggerTableFunctionLibrary::execGetDataTableRowFromName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics
	{
		struct AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms
		{
			UDataTable* Table;
			FName RowName;
			FAtomTriggerRow OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, OutRow), Z_Construct_UScriptStruct_FAtomTriggerRow, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), &Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomTriggerTableFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomTriggerTableFunctionLibrary, nullptr, "GetDataTableRowFromName", nullptr, nullptr, sizeof(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_NoRegister()
	{
		return UAtomTriggerTableFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName, "GetDataTableRowFromName" }, // 3902393014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomTriggerTableFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomTriggerTableFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomTriggerTableFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::ClassParams = {
		&UAtomTriggerTableFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomTriggerTableFunctionLibrary, 1537411071);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomTriggerTableFunctionLibrary>()
	{
		return UAtomTriggerTableFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomTriggerTableFunctionLibrary(Z_Construct_UClass_UAtomTriggerTableFunctionLibrary, &UAtomTriggerTableFunctionLibrary::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomTriggerTableFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomTriggerTableFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
