// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SortPlugin/Public/SortPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSortPluginBPLibrary() {}
// Cross Module References
	SORTPLUGIN_API UClass* Z_Construct_UClass_USortPluginBPLibrary_NoRegister();
	SORTPLUGIN_API UClass* Z_Construct_UClass_USortPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SortPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_FloatFilterDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_IntFilterDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_NameFilterDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_ObjectFilterDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_StringFilterDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_VectorFilterDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_ActorSortDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_FloatSortDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_IntSortDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_NameSortDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_ObjectSortDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_StringSortDelegate__DelegateSignature();
	SORTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SortPlugin_VectorSortDelegate__DelegateSignature();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ESearchCase();
// End Cross Module References
	DEFINE_FUNCTION(USortPluginBPLibrary::execAverageFloat)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USortPluginBPLibrary::AverageFloat(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execAverageInteger)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USortPluginBPLibrary::AverageInteger(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execClampFloat)
	{
		P_GET_TARRAY(float,Z_Param_Array);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=USortPluginBPLibrary::ClampFloat(Z_Param_Array,Z_Param_Min,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execClampFloatRef)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::ClampFloatRef(Z_Param_Out_Array,Z_Param_Min,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execClampInteger)
	{
		P_GET_TARRAY(int32,Z_Param_Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_Min);
		P_GET_PROPERTY(FIntProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=USortPluginBPLibrary::ClampInteger(Z_Param_Array,Z_Param_Min,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execClampIntegerRef)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_Min);
		P_GET_PROPERTY(FIntProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::ClampIntegerRef(Z_Param_Out_Array,Z_Param_Min,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execClampVectorSize)
	{
		P_GET_TARRAY(FVector,Z_Param_Array);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSize);
		P_GET_UBOOL(Z_Param_bOnly2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=USortPluginBPLibrary::ClampVectorSize(Z_Param_Array,Z_Param_MinSize,Z_Param_MaxSize,Z_Param_bOnly2D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execClampVectorSizeRef)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Array);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSize);
		P_GET_UBOOL(Z_Param_bOnly2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::ClampVectorSizeRef(Z_Param_Out_Array,Z_Param_MinSize,Z_Param_MaxSize,Z_Param_bOnly2D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execClosestActor)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Array);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Origin);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Closest);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Distance);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::ClosestActor(Z_Param_Out_Array,Z_Param_Out_Origin,Z_Param_Out_Closest,Z_Param_Out_Distance,Z_Param_Out_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execClosestLocation)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Array);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Closest);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Distance);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::ClosestLocation(Z_Param_Out_Array,Z_Param_Origin,Z_Param_Out_Closest,Z_Param_Out_Distance,Z_Param_Out_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execExtractActor)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=USortPluginBPLibrary::ExtractActor(Z_Param_Out_Array,Z_Param_StartIndex,Z_Param_EndIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execExtractFloat)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=USortPluginBPLibrary::ExtractFloat(Z_Param_Out_Array,Z_Param_StartIndex,Z_Param_EndIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execExtractInteger)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=USortPluginBPLibrary::ExtractInteger(Z_Param_Out_Array,Z_Param_StartIndex,Z_Param_EndIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execExtractName)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=USortPluginBPLibrary::ExtractName(Z_Param_Out_Array,Z_Param_StartIndex,Z_Param_EndIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execExtractObject)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=USortPluginBPLibrary::ExtractObject(Z_Param_Out_Array,Z_Param_StartIndex,Z_Param_EndIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execExtractString)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=USortPluginBPLibrary::ExtractString(Z_Param_Out_Array,Z_Param_StartIndex,Z_Param_EndIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execExtractVector)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=USortPluginBPLibrary::ExtractVector(Z_Param_Out_Array,Z_Param_StartIndex,Z_Param_EndIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execFarthestActor)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Array);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Origin);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Farthest);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Distance);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::FarthestActor(Z_Param_Out_Array,Z_Param_Out_Origin,Z_Param_Out_Farthest,Z_Param_Out_Distance,Z_Param_Out_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execFarthestLocation)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Array);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Farthest);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Distance);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::FarthestLocation(Z_Param_Out_Array,Z_Param_Origin,Z_Param_Out_Farthest,Z_Param_Out_Distance,Z_Param_Out_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execFilterMatch)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Array);
		P_GET_PROPERTY(FStrProperty,Z_Param_Pattern);
		P_GET_UBOOL_REF(Z_Param_Out_bFound);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USortPluginBPLibrary::FilterMatch(Z_Param_Out_Array,Z_Param_Pattern,Z_Param_Out_bFound,Z_Param_Out_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execFilterMatches)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Array);
		P_GET_PROPERTY(FStrProperty,Z_Param_Pattern);
		P_GET_UBOOL_REF(Z_Param_Out_bFound);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Indexes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=USortPluginBPLibrary::FilterMatches(Z_Param_Out_Array,Z_Param_Pattern,Z_Param_Out_bFound,Z_Param_Out_Indexes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execMaximumFloatIndex)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USortPluginBPLibrary::MaximumFloatIndex(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execMaximumIntegerIndex)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USortPluginBPLibrary::MaximumIntegerIndex(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execMinimumFloatIndex)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USortPluginBPLibrary::MinimumFloatIndex(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execMinimumIntegerIndex)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USortPluginBPLibrary::MinimumIntegerIndex(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execMinMaxFloatNormalization)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=USortPluginBPLibrary::MinMaxFloatNormalization(Z_Param_Out_Array,Z_Param_Min,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execMinMaxIntegerNormalization)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_Min);
		P_GET_PROPERTY(FIntProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=USortPluginBPLibrary::MinMaxIntegerNormalization(Z_Param_Out_Array,Z_Param_Min,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateFilterActor)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=USortPluginBPLibrary::PredicateFilterActor(Z_Param_Out_Array,FActorFilterDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateFilterFloat)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=USortPluginBPLibrary::PredicateFilterFloat(Z_Param_Out_Array,FFloatFilterDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateFilterInteger)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=USortPluginBPLibrary::PredicateFilterInteger(Z_Param_Out_Array,FIntFilterDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateFilterName)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=USortPluginBPLibrary::PredicateFilterName(Z_Param_Out_Array,FNameFilterDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateFilterObject)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=USortPluginBPLibrary::PredicateFilterObject(Z_Param_Out_Array,FObjectFilterDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateFilterString)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=USortPluginBPLibrary::PredicateFilterString(Z_Param_Out_Array,FStringFilterDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateFilterVector)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=USortPluginBPLibrary::PredicateFilterVector(Z_Param_Out_Array,FVectorFilterDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortActor)
	{
		P_GET_TARRAY(AActor*,Z_Param_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=USortPluginBPLibrary::PredicateSortActor(Z_Param_Array,FActorSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortActorRef)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::PredicateSortActorRef(Z_Param_Out_Array,FActorSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortFloat)
	{
		P_GET_TARRAY(float,Z_Param_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=USortPluginBPLibrary::PredicateSortFloat(Z_Param_Array,FFloatSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortFloatRef)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::PredicateSortFloatRef(Z_Param_Out_Array,FFloatSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortInteger)
	{
		P_GET_TARRAY(int32,Z_Param_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=USortPluginBPLibrary::PredicateSortInteger(Z_Param_Array,FIntSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortIntegerRef)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::PredicateSortIntegerRef(Z_Param_Out_Array,FIntSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortName)
	{
		P_GET_TARRAY(FName,Z_Param_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=USortPluginBPLibrary::PredicateSortName(Z_Param_Array,FNameSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortNameRef)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::PredicateSortNameRef(Z_Param_Out_Array,FNameSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortObject)
	{
		P_GET_TARRAY(UObject*,Z_Param_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=USortPluginBPLibrary::PredicateSortObject(Z_Param_Array,FObjectSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortObjectRef)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::PredicateSortObjectRef(Z_Param_Out_Array,FObjectSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortString)
	{
		P_GET_TARRAY(FString,Z_Param_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=USortPluginBPLibrary::PredicateSortString(Z_Param_Array,FStringSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortStringRef)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::PredicateSortStringRef(Z_Param_Out_Array,FStringSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortVector)
	{
		P_GET_TARRAY(FVector,Z_Param_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=USortPluginBPLibrary::PredicateSortVector(Z_Param_Array,FVectorSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execPredicateSortVectorRef)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PredicateFunction);
		P_GET_UBOOL(Z_Param_InvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::PredicateSortVectorRef(Z_Param_Out_Array,FVectorSortDelegate(Z_Param_Out_PredicateFunction),Z_Param_InvertResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execRandomFloat)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=USortPluginBPLibrary::RandomFloat(Z_Param_Size,Z_Param_MinValue,Z_Param_MaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execRandomInteger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=USortPluginBPLibrary::RandomInteger(Z_Param_Size,Z_Param_MinValue,Z_Param_MaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execRandomVector)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_STRUCT(FVector,Z_Param_MinValue);
		P_GET_STRUCT(FVector,Z_Param_MaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=USortPluginBPLibrary::RandomVector(Z_Param_Size,Z_Param_MinValue,Z_Param_MaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execReverseActor)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=USortPluginBPLibrary::ReverseActor(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execReverseFloat)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=USortPluginBPLibrary::ReverseFloat(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execReverseInteger)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=USortPluginBPLibrary::ReverseInteger(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execReverseName)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=USortPluginBPLibrary::ReverseName(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execReverseObject)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=USortPluginBPLibrary::ReverseObject(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execReverseString)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=USortPluginBPLibrary::ReverseString(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execReverseVector)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=USortPluginBPLibrary::ReverseVector(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortActor)
	{
		P_GET_TARRAY(AActor*,Z_Param_Array);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=USortPluginBPLibrary::SortActor(Z_Param_Array,Z_Param_Out_Actor,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortActorRef)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Array);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::SortActorRef(Z_Param_Out_Array,Z_Param_Out_Actor,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortFloat)
	{
		P_GET_TARRAY(float,Z_Param_Array);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=USortPluginBPLibrary::SortFloat(Z_Param_Array,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortFloatRef)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::SortFloatRef(Z_Param_Out_Array,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortInteger)
	{
		P_GET_TARRAY(int32,Z_Param_Array);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=USortPluginBPLibrary::SortInteger(Z_Param_Array,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortIntegerRef)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::SortIntegerRef(Z_Param_Out_Array,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortName)
	{
		P_GET_TARRAY(FName,Z_Param_Array);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=USortPluginBPLibrary::SortName(Z_Param_Array,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortNameRef)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Array);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::SortNameRef(Z_Param_Out_Array,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortString)
	{
		P_GET_TARRAY(FString,Z_Param_Array);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=USortPluginBPLibrary::SortString(Z_Param_Array,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortStringRef)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Array);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::SortStringRef(Z_Param_Out_Array,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortVector)
	{
		P_GET_TARRAY(FVector,Z_Param_Array);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=USortPluginBPLibrary::SortVector(Z_Param_Array,Z_Param_Origin,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSortVectorRef)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Array);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_UBOOL(Z_Param_bIsAscending);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortPluginBPLibrary::SortVectorRef(Z_Param_Out_Array,Z_Param_Origin,Z_Param_bIsAscending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execSplitString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_STRING);
		P_GET_PROPERTY(FStrProperty,Z_Param_Separator);
		P_GET_PROPERTY(FByteProperty,Z_Param_SearchCase);
		P_GET_UBOOL(Z_Param_RemoveEmptyString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=USortPluginBPLibrary::SplitString(Z_Param_STRING,Z_Param_Separator,ESearchCase::Type(Z_Param_SearchCase),Z_Param_RemoveEmptyString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execToActorSet)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<AActor*>*)Z_Param__Result=USortPluginBPLibrary::ToActorSet(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execToFloatSet)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<float>*)Z_Param__Result=USortPluginBPLibrary::ToFloatSet(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execToIntegerSet)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<int32>*)Z_Param__Result=USortPluginBPLibrary::ToIntegerSet(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execToNameSet)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=USortPluginBPLibrary::ToNameSet(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execToObjectSet)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<UObject*>*)Z_Param__Result=USortPluginBPLibrary::ToObjectSet(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execToStringSet)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FString>*)Z_Param__Result=USortPluginBPLibrary::ToStringSet(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortPluginBPLibrary::execToVectorSet)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FVector>*)Z_Param__Result=USortPluginBPLibrary::ToVectorSet(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	void USortPluginBPLibrary::StaticRegisterNativesUSortPluginBPLibrary()
	{
		UClass* Class = USortPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AverageFloat", &USortPluginBPLibrary::execAverageFloat },
			{ "AverageInteger", &USortPluginBPLibrary::execAverageInteger },
			{ "ClampFloat", &USortPluginBPLibrary::execClampFloat },
			{ "ClampFloatRef", &USortPluginBPLibrary::execClampFloatRef },
			{ "ClampInteger", &USortPluginBPLibrary::execClampInteger },
			{ "ClampIntegerRef", &USortPluginBPLibrary::execClampIntegerRef },
			{ "ClampVectorSize", &USortPluginBPLibrary::execClampVectorSize },
			{ "ClampVectorSizeRef", &USortPluginBPLibrary::execClampVectorSizeRef },
			{ "ClosestActor", &USortPluginBPLibrary::execClosestActor },
			{ "ClosestLocation", &USortPluginBPLibrary::execClosestLocation },
			{ "ExtractActor", &USortPluginBPLibrary::execExtractActor },
			{ "ExtractFloat", &USortPluginBPLibrary::execExtractFloat },
			{ "ExtractInteger", &USortPluginBPLibrary::execExtractInteger },
			{ "ExtractName", &USortPluginBPLibrary::execExtractName },
			{ "ExtractObject", &USortPluginBPLibrary::execExtractObject },
			{ "ExtractString", &USortPluginBPLibrary::execExtractString },
			{ "ExtractVector", &USortPluginBPLibrary::execExtractVector },
			{ "FarthestActor", &USortPluginBPLibrary::execFarthestActor },
			{ "FarthestLocation", &USortPluginBPLibrary::execFarthestLocation },
			{ "FilterMatch", &USortPluginBPLibrary::execFilterMatch },
			{ "FilterMatches", &USortPluginBPLibrary::execFilterMatches },
			{ "MaximumFloatIndex", &USortPluginBPLibrary::execMaximumFloatIndex },
			{ "MaximumIntegerIndex", &USortPluginBPLibrary::execMaximumIntegerIndex },
			{ "MinimumFloatIndex", &USortPluginBPLibrary::execMinimumFloatIndex },
			{ "MinimumIntegerIndex", &USortPluginBPLibrary::execMinimumIntegerIndex },
			{ "MinMaxFloatNormalization", &USortPluginBPLibrary::execMinMaxFloatNormalization },
			{ "MinMaxIntegerNormalization", &USortPluginBPLibrary::execMinMaxIntegerNormalization },
			{ "PredicateFilterActor", &USortPluginBPLibrary::execPredicateFilterActor },
			{ "PredicateFilterFloat", &USortPluginBPLibrary::execPredicateFilterFloat },
			{ "PredicateFilterInteger", &USortPluginBPLibrary::execPredicateFilterInteger },
			{ "PredicateFilterName", &USortPluginBPLibrary::execPredicateFilterName },
			{ "PredicateFilterObject", &USortPluginBPLibrary::execPredicateFilterObject },
			{ "PredicateFilterString", &USortPluginBPLibrary::execPredicateFilterString },
			{ "PredicateFilterVector", &USortPluginBPLibrary::execPredicateFilterVector },
			{ "PredicateSortActor", &USortPluginBPLibrary::execPredicateSortActor },
			{ "PredicateSortActorRef", &USortPluginBPLibrary::execPredicateSortActorRef },
			{ "PredicateSortFloat", &USortPluginBPLibrary::execPredicateSortFloat },
			{ "PredicateSortFloatRef", &USortPluginBPLibrary::execPredicateSortFloatRef },
			{ "PredicateSortInteger", &USortPluginBPLibrary::execPredicateSortInteger },
			{ "PredicateSortIntegerRef", &USortPluginBPLibrary::execPredicateSortIntegerRef },
			{ "PredicateSortName", &USortPluginBPLibrary::execPredicateSortName },
			{ "PredicateSortNameRef", &USortPluginBPLibrary::execPredicateSortNameRef },
			{ "PredicateSortObject", &USortPluginBPLibrary::execPredicateSortObject },
			{ "PredicateSortObjectRef", &USortPluginBPLibrary::execPredicateSortObjectRef },
			{ "PredicateSortString", &USortPluginBPLibrary::execPredicateSortString },
			{ "PredicateSortStringRef", &USortPluginBPLibrary::execPredicateSortStringRef },
			{ "PredicateSortVector", &USortPluginBPLibrary::execPredicateSortVector },
			{ "PredicateSortVectorRef", &USortPluginBPLibrary::execPredicateSortVectorRef },
			{ "RandomFloat", &USortPluginBPLibrary::execRandomFloat },
			{ "RandomInteger", &USortPluginBPLibrary::execRandomInteger },
			{ "RandomVector", &USortPluginBPLibrary::execRandomVector },
			{ "ReverseActor", &USortPluginBPLibrary::execReverseActor },
			{ "ReverseFloat", &USortPluginBPLibrary::execReverseFloat },
			{ "ReverseInteger", &USortPluginBPLibrary::execReverseInteger },
			{ "ReverseName", &USortPluginBPLibrary::execReverseName },
			{ "ReverseObject", &USortPluginBPLibrary::execReverseObject },
			{ "ReverseString", &USortPluginBPLibrary::execReverseString },
			{ "ReverseVector", &USortPluginBPLibrary::execReverseVector },
			{ "SortActor", &USortPluginBPLibrary::execSortActor },
			{ "SortActorRef", &USortPluginBPLibrary::execSortActorRef },
			{ "SortFloat", &USortPluginBPLibrary::execSortFloat },
			{ "SortFloatRef", &USortPluginBPLibrary::execSortFloatRef },
			{ "SortInteger", &USortPluginBPLibrary::execSortInteger },
			{ "SortIntegerRef", &USortPluginBPLibrary::execSortIntegerRef },
			{ "SortName", &USortPluginBPLibrary::execSortName },
			{ "SortNameRef", &USortPluginBPLibrary::execSortNameRef },
			{ "SortString", &USortPluginBPLibrary::execSortString },
			{ "SortStringRef", &USortPluginBPLibrary::execSortStringRef },
			{ "SortVector", &USortPluginBPLibrary::execSortVector },
			{ "SortVectorRef", &USortPluginBPLibrary::execSortVectorRef },
			{ "SplitString", &USortPluginBPLibrary::execSplitString },
			{ "ToActorSet", &USortPluginBPLibrary::execToActorSet },
			{ "ToFloatSet", &USortPluginBPLibrary::execToFloatSet },
			{ "ToIntegerSet", &USortPluginBPLibrary::execToIntegerSet },
			{ "ToNameSet", &USortPluginBPLibrary::execToNameSet },
			{ "ToObjectSet", &USortPluginBPLibrary::execToObjectSet },
			{ "ToStringSet", &USortPluginBPLibrary::execToStringSet },
			{ "ToVectorSet", &USortPluginBPLibrary::execToVectorSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics
	{
		struct SortPluginBPLibrary_eventAverageFloat_Parms
		{
			TArray<float> Array;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventAverageFloat_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventAverageFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "AverageFloat", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventAverageFloat_Parms), Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics
	{
		struct SortPluginBPLibrary_eventAverageInteger_Parms
		{
			TArray<int32> Array;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventAverageInteger_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventAverageInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "AverageInteger", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventAverageInteger_Parms), Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics
	{
		struct SortPluginBPLibrary_eventClampFloat_Parms
		{
			TArray<float> Array;
			float Min;
			float Max;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampFloat_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampFloat_Parms, Min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampFloat_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ClampFloat", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventClampFloat_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics
	{
		struct SortPluginBPLibrary_eventClampFloatRef_Parms
		{
			TArray<float> Array;
			float Min;
			float Max;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampFloatRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampFloatRef_Parms, Min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampFloatRef_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::NewProp_Max,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ClampFloatRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventClampFloatRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics
	{
		struct SortPluginBPLibrary_eventClampInteger_Parms
		{
			TArray<int32> Array;
			int32 Min;
			int32 Max;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampInteger_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampInteger_Parms, Min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampInteger_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampInteger_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ClampInteger", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventClampInteger_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics
	{
		struct SortPluginBPLibrary_eventClampIntegerRef_Parms
		{
			TArray<int32> Array;
			int32 Min;
			int32 Max;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampIntegerRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampIntegerRef_Parms, Min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampIntegerRef_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::NewProp_Max,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ClampIntegerRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventClampIntegerRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics
	{
		struct SortPluginBPLibrary_eventClampVectorSize_Parms
		{
			TArray<FVector> Array;
			float MinSize;
			float MaxSize;
			bool bOnly2D;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSize;
		static void NewProp_bOnly2D_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnly2D;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampVectorSize_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_MinSize = { "MinSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampVectorSize_Parms, MinSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampVectorSize_Parms, MaxSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_bOnly2D_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventClampVectorSize_Parms*)Obj)->bOnly2D = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_bOnly2D = { "bOnly2D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventClampVectorSize_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_bOnly2D_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampVectorSize_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_MinSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_MaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_bOnly2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ClampVectorSize", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventClampVectorSize_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics
	{
		struct SortPluginBPLibrary_eventClampVectorSizeRef_Parms
		{
			TArray<FVector> Array;
			float MinSize;
			float MaxSize;
			bool bOnly2D;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSize;
		static void NewProp_bOnly2D_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnly2D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampVectorSizeRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_MinSize = { "MinSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampVectorSizeRef_Parms, MinSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClampVectorSizeRef_Parms, MaxSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_bOnly2D_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventClampVectorSizeRef_Parms*)Obj)->bOnly2D = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_bOnly2D = { "bOnly2D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventClampVectorSizeRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_bOnly2D_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_MinSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_MaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::NewProp_bOnly2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ClampVectorSizeRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventClampVectorSizeRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics
	{
		struct SortPluginBPLibrary_eventClosestActor_Parms
		{
			TArray<AActor*> Array;
			const AActor* Origin;
			AActor* Closest;
			float Distance;
			int32 Index;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Closest;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClosestActor_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClosestActor_Parms, Origin), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Closest = { "Closest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClosestActor_Parms, Closest), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClosestActor_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClosestActor_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Closest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ClosestActor", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventClosestActor_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics
	{
		struct SortPluginBPLibrary_eventClosestLocation_Parms
		{
			TArray<FVector> Array;
			FVector Origin;
			FVector Closest;
			float Distance;
			int32 Index;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Closest;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClosestLocation_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClosestLocation_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Closest = { "Closest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClosestLocation_Parms, Closest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClosestLocation_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventClosestLocation_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Closest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ClosestLocation", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventClosestLocation_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics
	{
		struct SortPluginBPLibrary_eventExtractActor_Parms
		{
			TArray<AActor*> Array;
			int32 StartIndex;
			int32 EndIndex;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractActor_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractActor_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractActor_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ExtractActor", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventExtractActor_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics
	{
		struct SortPluginBPLibrary_eventExtractFloat_Parms
		{
			TArray<float> Array;
			int32 StartIndex;
			int32 EndIndex;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractFloat_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractFloat_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractFloat_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ExtractFloat", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventExtractFloat_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics
	{
		struct SortPluginBPLibrary_eventExtractInteger_Parms
		{
			TArray<int32> Array;
			int32 StartIndex;
			int32 EndIndex;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractInteger_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractInteger_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractInteger_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractInteger_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ExtractInteger", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventExtractInteger_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics
	{
		struct SortPluginBPLibrary_eventExtractName_Parms
		{
			TArray<FName> Array;
			int32 StartIndex;
			int32 EndIndex;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractName_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractName_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractName_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ExtractName", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventExtractName_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ExtractName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ExtractName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics
	{
		struct SortPluginBPLibrary_eventExtractObject_Parms
		{
			TArray<UObject*> Array;
			int32 StartIndex;
			int32 EndIndex;
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractObject_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractObject_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractObject_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractObject_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ExtractObject", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventExtractObject_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics
	{
		struct SortPluginBPLibrary_eventExtractString_Parms
		{
			TArray<FString> Array;
			int32 StartIndex;
			int32 EndIndex;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractString_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractString_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ExtractString", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventExtractString_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ExtractString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ExtractString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics
	{
		struct SortPluginBPLibrary_eventExtractVector_Parms
		{
			TArray<FVector> Array;
			int32 StartIndex;
			int32 EndIndex;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractVector_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractVector_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractVector_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventExtractVector_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ExtractVector", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventExtractVector_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics
	{
		struct SortPluginBPLibrary_eventFarthestActor_Parms
		{
			TArray<AActor*> Array;
			const AActor* Origin;
			AActor* Farthest;
			float Distance;
			int32 Index;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Farthest;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFarthestActor_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFarthestActor_Parms, Origin), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Farthest = { "Farthest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFarthestActor_Parms, Farthest), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFarthestActor_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFarthestActor_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Farthest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "FarthestActor", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventFarthestActor_Parms), Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics
	{
		struct SortPluginBPLibrary_eventFarthestLocation_Parms
		{
			TArray<FVector> Array;
			FVector Origin;
			FVector Farthest;
			float Distance;
			int32 Index;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Farthest;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFarthestLocation_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFarthestLocation_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Farthest = { "Farthest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFarthestLocation_Parms, Farthest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFarthestLocation_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFarthestLocation_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Farthest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "FarthestLocation", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventFarthestLocation_Parms), Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics
	{
		struct SortPluginBPLibrary_eventFilterMatch_Parms
		{
			TArray<FString> Array;
			FString Pattern;
			bool bFound;
			int32 Index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern;
		static void NewProp_bFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFound;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFilterMatch_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Pattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFilterMatch_Parms, Pattern), METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Pattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Pattern_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_bFound_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventFilterMatch_Parms*)Obj)->bFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventFilterMatch_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFilterMatch_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFilterMatch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Pattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_bFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "FilterMatch", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventFilterMatch_Parms), Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics
	{
		struct SortPluginBPLibrary_eventFilterMatches_Parms
		{
			TArray<FString> Array;
			FString Pattern;
			bool bFound;
			TArray<int32> Indexes;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern;
		static void NewProp_bFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFound;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Indexes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indexes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFilterMatches_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Pattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFilterMatches_Parms, Pattern), METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Pattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Pattern_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_bFound_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventFilterMatches_Parms*)Obj)->bFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventFilterMatches_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Indexes_Inner = { "Indexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Indexes = { "Indexes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFilterMatches_Parms, Indexes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventFilterMatches_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Pattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_bFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Indexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_Indexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "FilterMatches", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventFilterMatches_Parms), Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics
	{
		struct SortPluginBPLibrary_eventMaximumFloatIndex_Parms
		{
			TArray<float> Array;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMaximumFloatIndex_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMaximumFloatIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "MaximumFloatIndex", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventMaximumFloatIndex_Parms), Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics
	{
		struct SortPluginBPLibrary_eventMaximumIntegerIndex_Parms
		{
			TArray<int32> Array;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMaximumIntegerIndex_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMaximumIntegerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "MaximumIntegerIndex", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventMaximumIntegerIndex_Parms), Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics
	{
		struct SortPluginBPLibrary_eventMinimumFloatIndex_Parms
		{
			TArray<float> Array;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinimumFloatIndex_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinimumFloatIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "MinimumFloatIndex", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventMinimumFloatIndex_Parms), Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics
	{
		struct SortPluginBPLibrary_eventMinimumIntegerIndex_Parms
		{
			TArray<int32> Array;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinimumIntegerIndex_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinimumIntegerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "MinimumIntegerIndex", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventMinimumIntegerIndex_Parms), Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics
	{
		struct SortPluginBPLibrary_eventMinMaxFloatNormalization_Parms
		{
			TArray<float> Array;
			float Min;
			float Max;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinMaxFloatNormalization_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinMaxFloatNormalization_Parms, Min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinMaxFloatNormalization_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinMaxFloatNormalization_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "MinMaxFloatNormalization", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventMinMaxFloatNormalization_Parms), Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics
	{
		struct SortPluginBPLibrary_eventMinMaxIntegerNormalization_Parms
		{
			TArray<int32> Array;
			int32 Min;
			int32 Max;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinMaxIntegerNormalization_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinMaxIntegerNormalization_Parms, Min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinMaxIntegerNormalization_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventMinMaxIntegerNormalization_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "MinMaxIntegerNormalization", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventMinMaxIntegerNormalization_Parms), Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics
	{
		struct SortPluginBPLibrary_eventPredicateFilterActor_Parms
		{
			TArray<AActor*> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterActor_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterActor_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_ActorFilterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateFilterActor_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateFilterActor_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateFilterActor", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateFilterActor_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics
	{
		struct SortPluginBPLibrary_eventPredicateFilterFloat_Parms
		{
			TArray<float> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterFloat_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterFloat_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_FloatFilterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateFilterFloat_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateFilterFloat_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateFilterFloat", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateFilterFloat_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics
	{
		struct SortPluginBPLibrary_eventPredicateFilterInteger_Parms
		{
			TArray<int32> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterInteger_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterInteger_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_IntFilterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateFilterInteger_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateFilterInteger_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterInteger_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateFilterInteger", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateFilterInteger_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics
	{
		struct SortPluginBPLibrary_eventPredicateFilterName_Parms
		{
			TArray<FName> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterName_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterName_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_NameFilterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateFilterName_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateFilterName_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateFilterName", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateFilterName_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics
	{
		struct SortPluginBPLibrary_eventPredicateFilterObject_Parms
		{
			TArray<UObject*> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterObject_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterObject_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_ObjectFilterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateFilterObject_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateFilterObject_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterObject_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateFilterObject", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateFilterObject_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics
	{
		struct SortPluginBPLibrary_eventPredicateFilterString_Parms
		{
			TArray<FString> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterString_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_StringFilterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateFilterString_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateFilterString_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateFilterString", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateFilterString_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics
	{
		struct SortPluginBPLibrary_eventPredicateFilterVector_Parms
		{
			TArray<FVector> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterVector_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterVector_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_VectorFilterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateFilterVector_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateFilterVector_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateFilterVector_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateFilterVector", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateFilterVector_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortActor_Parms
		{
			TArray<AActor*> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortActor_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortActor_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_ActorSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortActor_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortActor_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortActor", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortActor_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortActorRef_Parms
		{
			TArray<AActor*> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortActorRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortActorRef_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_ActorSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortActorRef_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortActorRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::NewProp_InvertResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortActorRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortActorRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortFloat_Parms
		{
			TArray<float> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortFloat_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortFloat_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_FloatSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortFloat_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortFloat_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortFloat", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortFloat_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortFloatRef_Parms
		{
			TArray<float> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortFloatRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortFloatRef_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_FloatSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortFloatRef_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortFloatRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::NewProp_InvertResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortFloatRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortFloatRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortInteger_Parms
		{
			TArray<int32> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortInteger_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortInteger_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_IntSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortInteger_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortInteger_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortInteger_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortInteger", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortInteger_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortIntegerRef_Parms
		{
			TArray<int32> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortIntegerRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortIntegerRef_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_IntSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortIntegerRef_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortIntegerRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::NewProp_InvertResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortIntegerRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortIntegerRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortName_Parms
		{
			TArray<FName> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortName_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortName_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_NameSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortName_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortName_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortName", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortName_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortNameRef_Parms
		{
			TArray<FName> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortNameRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortNameRef_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_NameSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortNameRef_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortNameRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::NewProp_InvertResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortNameRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortNameRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortObject_Parms
		{
			TArray<UObject*> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortObject_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortObject_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_ObjectSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortObject_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortObject_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortObject_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortObject", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortObject_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortObjectRef_Parms
		{
			TArray<UObject*> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortObjectRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortObjectRef_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_ObjectSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortObjectRef_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortObjectRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::NewProp_InvertResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortObjectRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortObjectRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortString_Parms
		{
			TArray<FString> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortString_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_StringSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortString_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortString_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortString", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortString_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortStringRef_Parms
		{
			TArray<FString> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortStringRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortStringRef_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_StringSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortStringRef_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortStringRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::NewProp_InvertResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortStringRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortStringRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortVector_Parms
		{
			TArray<FVector> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortVector_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortVector_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_VectorSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortVector_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortVector_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortVector_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_InvertResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortVector", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortVector_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics
	{
		struct SortPluginBPLibrary_eventPredicateSortVectorRef_Parms
		{
			TArray<FVector> Array;
			FScriptDelegate PredicateFunction;
			bool InvertResult;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PredicateFunction;
		static void NewProp_InvertResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortVectorRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_PredicateFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_PredicateFunction = { "PredicateFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventPredicateSortVectorRef_Parms, PredicateFunction), Z_Construct_UDelegateFunction_SortPlugin_VectorSortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_PredicateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_PredicateFunction_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_InvertResult_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventPredicateSortVectorRef_Parms*)Obj)->InvertResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_InvertResult = { "InvertResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventPredicateSortVectorRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_InvertResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_PredicateFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::NewProp_InvertResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "PredicateSortVectorRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventPredicateSortVectorRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics
	{
		struct SortPluginBPLibrary_eventRandomFloat_Parms
		{
			int32 Size;
			float MinValue;
			float MaxValue;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomFloat_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomFloat_Parms, MinValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomFloat_Parms, MaxValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "RandomFloat", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventRandomFloat_Parms), Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics
	{
		struct SortPluginBPLibrary_eventRandomInteger_Parms
		{
			int32 Size;
			int32 MinValue;
			int32 MaxValue;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomInteger_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomInteger_Parms, MinValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomInteger_Parms, MaxValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomInteger_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "RandomInteger", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventRandomInteger_Parms), Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics
	{
		struct SortPluginBPLibrary_eventRandomVector_Parms
		{
			int32 Size;
			FVector MinValue;
			FVector MaxValue;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomVector_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomVector_Parms, MinValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomVector_Parms, MaxValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventRandomVector_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "RandomVector", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventRandomVector_Parms), Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_RandomVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_RandomVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics
	{
		struct SortPluginBPLibrary_eventReverseActor_Parms
		{
			TArray<AActor*> Array;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseActor_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ReverseActor", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventReverseActor_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics
	{
		struct SortPluginBPLibrary_eventReverseFloat_Parms
		{
			TArray<float> Array;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseFloat_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ReverseFloat", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventReverseFloat_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics
	{
		struct SortPluginBPLibrary_eventReverseInteger_Parms
		{
			TArray<int32> Array;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseInteger_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseInteger_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ReverseInteger", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventReverseInteger_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics
	{
		struct SortPluginBPLibrary_eventReverseName_Parms
		{
			TArray<FName> Array;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseName_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ReverseName", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventReverseName_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ReverseName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ReverseName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics
	{
		struct SortPluginBPLibrary_eventReverseObject_Parms
		{
			TArray<UObject*> Array;
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseObject_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseObject_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ReverseObject", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventReverseObject_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics
	{
		struct SortPluginBPLibrary_eventReverseString_Parms
		{
			TArray<FString> Array;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ReverseString", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventReverseString_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ReverseString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ReverseString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics
	{
		struct SortPluginBPLibrary_eventReverseVector_Parms
		{
			TArray<FVector> Array;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseVector_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventReverseVector_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ReverseVector", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventReverseVector_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics
	{
		struct SortPluginBPLibrary_eventSortActor_Parms
		{
			TArray<AActor*> Array;
			const AActor* Actor;
			bool bIsAscending;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortActor_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_Actor_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortActor_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortActor_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_bIsAscending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortActor", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortActor_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics
	{
		struct SortPluginBPLibrary_eventSortActorRef_Parms
		{
			TArray<AActor*> Array;
			const AActor* Actor;
			bool bIsAscending;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortActorRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortActorRef_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_Actor_MetaData)) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortActorRef_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortActorRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::NewProp_bIsAscending,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortActorRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortActorRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics
	{
		struct SortPluginBPLibrary_eventSortFloat_Parms
		{
			TArray<float> Array;
			bool bIsAscending;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortFloat_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortFloat_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortFloat_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_bIsAscending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortFloat", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortFloat_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics
	{
		struct SortPluginBPLibrary_eventSortFloatRef_Parms
		{
			TArray<float> Array;
			bool bIsAscending;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortFloatRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortFloatRef_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortFloatRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::NewProp_bIsAscending,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortFloatRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortFloatRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics
	{
		struct SortPluginBPLibrary_eventSortInteger_Parms
		{
			TArray<int32> Array;
			bool bIsAscending;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortInteger_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortInteger_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortInteger_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortInteger_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_bIsAscending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortInteger", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortInteger_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics
	{
		struct SortPluginBPLibrary_eventSortIntegerRef_Parms
		{
			TArray<int32> Array;
			bool bIsAscending;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortIntegerRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortIntegerRef_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortIntegerRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::NewProp_bIsAscending,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortIntegerRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortIntegerRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics
	{
		struct SortPluginBPLibrary_eventSortName_Parms
		{
			TArray<FName> Array;
			bool bIsAscending;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortName_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortName_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortName_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_bIsAscending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortName", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortName_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics
	{
		struct SortPluginBPLibrary_eventSortNameRef_Parms
		{
			TArray<FName> Array;
			bool bIsAscending;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortNameRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortNameRef_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortNameRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::NewProp_bIsAscending,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortNameRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortNameRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics
	{
		struct SortPluginBPLibrary_eventSortString_Parms
		{
			TArray<FString> Array;
			bool bIsAscending;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortString_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortString_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_bIsAscending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortString", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortString_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics
	{
		struct SortPluginBPLibrary_eventSortStringRef_Parms
		{
			TArray<FString> Array;
			bool bIsAscending;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortStringRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortStringRef_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortStringRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::NewProp_bIsAscending,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortStringRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortStringRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics
	{
		struct SortPluginBPLibrary_eventSortVector_Parms
		{
			TArray<FVector> Array;
			FVector Origin;
			bool bIsAscending;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortVector_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortVector_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortVector_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortVector_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortVector_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_bIsAscending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortVector", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortVector_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics
	{
		struct SortPluginBPLibrary_eventSortVectorRef_Parms
		{
			TArray<FVector> Array;
			FVector Origin;
			bool bIsAscending;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static void NewProp_bIsAscending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAscending;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortVectorRef_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSortVectorRef_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::NewProp_bIsAscending_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSortVectorRef_Parms*)Obj)->bIsAscending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::NewProp_bIsAscending = { "bIsAscending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSortVectorRef_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::NewProp_bIsAscending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::NewProp_bIsAscending,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SortVectorRef", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSortVectorRef_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics
	{
		struct SortPluginBPLibrary_eventSplitString_Parms
		{
			FString STRING;
			FString Separator;
			TEnumAsByte<ESearchCase::Type> SearchCase;
			bool RemoveEmptyString;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_STRING_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_STRING;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Separator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Separator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchCase;
		static void NewProp_RemoveEmptyString_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveEmptyString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_STRING_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_STRING = { "STRING", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSplitString_Parms, STRING), METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_STRING_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_STRING_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_Separator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSplitString_Parms, Separator), METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_Separator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_Separator_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_SearchCase = { "SearchCase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSplitString_Parms, SearchCase), Z_Construct_UEnum_CoreUObject_ESearchCase, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_RemoveEmptyString_SetBit(void* Obj)
	{
		((SortPluginBPLibrary_eventSplitString_Parms*)Obj)->RemoveEmptyString = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_RemoveEmptyString = { "RemoveEmptyString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortPluginBPLibrary_eventSplitString_Parms), &Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_RemoveEmptyString_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventSplitString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_STRING,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_Separator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_SearchCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_RemoveEmptyString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "SplitString", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventSplitString_Parms), Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_SplitString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_SplitString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics
	{
		struct SortPluginBPLibrary_eventToActorSet_Parms
		{
			TArray<AActor*> Array;
			TSet<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToActorSet_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToActorSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ToActorSet", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventToActorSet_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics
	{
		struct SortPluginBPLibrary_eventToFloatSet_Parms
		{
			TArray<float> Array;
			TSet<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToFloatSet_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToFloatSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ToFloatSet", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventToFloatSet_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics
	{
		struct SortPluginBPLibrary_eventToIntegerSet_Parms
		{
			TArray<int32> Array;
			TSet<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToIntegerSet_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToIntegerSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ToIntegerSet", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventToIntegerSet_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics
	{
		struct SortPluginBPLibrary_eventToNameSet_Parms
		{
			TArray<FName> Array;
			TSet<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToNameSet_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToNameSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ToNameSet", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventToNameSet_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics
	{
		struct SortPluginBPLibrary_eventToObjectSet_Parms
		{
			TArray<UObject*> Array;
			TSet<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToObjectSet_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToObjectSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ToObjectSet", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventToObjectSet_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics
	{
		struct SortPluginBPLibrary_eventToStringSet_Parms
		{
			TArray<FString> Array;
			TSet<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToStringSet_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToStringSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ToStringSet", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventToStringSet_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics
	{
		struct SortPluginBPLibrary_eventToVectorSet_Parms
		{
			TArray<FVector> Array;
			TSet<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToVectorSet_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortPluginBPLibrary_eventToVectorSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortPluginBPLibrary, nullptr, "ToVectorSet", nullptr, nullptr, sizeof(SortPluginBPLibrary_eventToVectorSet_Parms), Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USortPluginBPLibrary_NoRegister()
	{
		return USortPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USortPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USortPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SortPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USortPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USortPluginBPLibrary_AverageFloat, "AverageFloat" }, // 1162578563
		{ &Z_Construct_UFunction_USortPluginBPLibrary_AverageInteger, "AverageInteger" }, // 3550380466
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ClampFloat, "ClampFloat" }, // 3524964537
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ClampFloatRef, "ClampFloatRef" }, // 1638942592
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ClampInteger, "ClampInteger" }, // 269836005
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ClampIntegerRef, "ClampIntegerRef" }, // 3774202015
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSize, "ClampVectorSize" }, // 1078669408
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ClampVectorSizeRef, "ClampVectorSizeRef" }, // 3138591032
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ClosestActor, "ClosestActor" }, // 1114112825
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ClosestLocation, "ClosestLocation" }, // 505479529
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ExtractActor, "ExtractActor" }, // 256747903
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ExtractFloat, "ExtractFloat" }, // 800776851
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ExtractInteger, "ExtractInteger" }, // 4159201075
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ExtractName, "ExtractName" }, // 2554900170
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ExtractObject, "ExtractObject" }, // 1465803702
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ExtractString, "ExtractString" }, // 1575005077
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ExtractVector, "ExtractVector" }, // 2722191681
		{ &Z_Construct_UFunction_USortPluginBPLibrary_FarthestActor, "FarthestActor" }, // 2863176944
		{ &Z_Construct_UFunction_USortPluginBPLibrary_FarthestLocation, "FarthestLocation" }, // 4104204902
		{ &Z_Construct_UFunction_USortPluginBPLibrary_FilterMatch, "FilterMatch" }, // 3741586129
		{ &Z_Construct_UFunction_USortPluginBPLibrary_FilterMatches, "FilterMatches" }, // 2289216067
		{ &Z_Construct_UFunction_USortPluginBPLibrary_MaximumFloatIndex, "MaximumFloatIndex" }, // 593189838
		{ &Z_Construct_UFunction_USortPluginBPLibrary_MaximumIntegerIndex, "MaximumIntegerIndex" }, // 818950560
		{ &Z_Construct_UFunction_USortPluginBPLibrary_MinimumFloatIndex, "MinimumFloatIndex" }, // 2142850384
		{ &Z_Construct_UFunction_USortPluginBPLibrary_MinimumIntegerIndex, "MinimumIntegerIndex" }, // 1682137588
		{ &Z_Construct_UFunction_USortPluginBPLibrary_MinMaxFloatNormalization, "MinMaxFloatNormalization" }, // 128273647
		{ &Z_Construct_UFunction_USortPluginBPLibrary_MinMaxIntegerNormalization, "MinMaxIntegerNormalization" }, // 299837840
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterActor, "PredicateFilterActor" }, // 2301612255
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterFloat, "PredicateFilterFloat" }, // 4214539898
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterInteger, "PredicateFilterInteger" }, // 2791096797
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterName, "PredicateFilterName" }, // 733191364
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterObject, "PredicateFilterObject" }, // 4155117737
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterString, "PredicateFilterString" }, // 3726972655
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateFilterVector, "PredicateFilterVector" }, // 184353613
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActor, "PredicateSortActor" }, // 2020483479
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortActorRef, "PredicateSortActorRef" }, // 1267643502
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloat, "PredicateSortFloat" }, // 344770344
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortFloatRef, "PredicateSortFloatRef" }, // 590656633
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortInteger, "PredicateSortInteger" }, // 3022309060
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortIntegerRef, "PredicateSortIntegerRef" }, // 1453316561
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortName, "PredicateSortName" }, // 1673079018
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortNameRef, "PredicateSortNameRef" }, // 2911931816
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObject, "PredicateSortObject" }, // 4216575930
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortObjectRef, "PredicateSortObjectRef" }, // 1610795843
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortString, "PredicateSortString" }, // 1488376790
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortStringRef, "PredicateSortStringRef" }, // 1725667937
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVector, "PredicateSortVector" }, // 3559755030
		{ &Z_Construct_UFunction_USortPluginBPLibrary_PredicateSortVectorRef, "PredicateSortVectorRef" }, // 1592277157
		{ &Z_Construct_UFunction_USortPluginBPLibrary_RandomFloat, "RandomFloat" }, // 1755970819
		{ &Z_Construct_UFunction_USortPluginBPLibrary_RandomInteger, "RandomInteger" }, // 2692387815
		{ &Z_Construct_UFunction_USortPluginBPLibrary_RandomVector, "RandomVector" }, // 1467429904
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ReverseActor, "ReverseActor" }, // 1171620158
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ReverseFloat, "ReverseFloat" }, // 3232457844
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ReverseInteger, "ReverseInteger" }, // 431929717
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ReverseName, "ReverseName" }, // 2962535360
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ReverseObject, "ReverseObject" }, // 1144196354
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ReverseString, "ReverseString" }, // 494753934
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ReverseVector, "ReverseVector" }, // 3307034286
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortActor, "SortActor" }, // 2158631763
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortActorRef, "SortActorRef" }, // 873677770
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortFloat, "SortFloat" }, // 2299637401
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortFloatRef, "SortFloatRef" }, // 154399722
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortInteger, "SortInteger" }, // 1914594848
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortIntegerRef, "SortIntegerRef" }, // 452427370
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortName, "SortName" }, // 3462012477
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortNameRef, "SortNameRef" }, // 427449329
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortString, "SortString" }, // 1077480571
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortStringRef, "SortStringRef" }, // 1743129688
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortVector, "SortVector" }, // 1429876215
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SortVectorRef, "SortVectorRef" }, // 4004384581
		{ &Z_Construct_UFunction_USortPluginBPLibrary_SplitString, "SplitString" }, // 1223706704
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ToActorSet, "ToActorSet" }, // 2710031168
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ToFloatSet, "ToFloatSet" }, // 3016146657
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ToIntegerSet, "ToIntegerSet" }, // 3455120397
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ToNameSet, "ToNameSet" }, // 2209090469
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ToObjectSet, "ToObjectSet" }, // 1899903772
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ToStringSet, "ToStringSet" }, // 2934047660
		{ &Z_Construct_UFunction_USortPluginBPLibrary_ToVectorSet, "ToVectorSet" }, // 4167327954
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USortPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SortPluginBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SortPluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USortPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USortPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USortPluginBPLibrary_Statics::ClassParams = {
		&USortPluginBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USortPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USortPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USortPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USortPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USortPluginBPLibrary, 230094269);
	template<> SORTPLUGIN_API UClass* StaticClass<USortPluginBPLibrary>()
	{
		return USortPluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USortPluginBPLibrary(Z_Construct_UClass_USortPluginBPLibrary, &USortPluginBPLibrary::StaticClass, TEXT("/Script/SortPlugin"), TEXT("USortPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USortPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
